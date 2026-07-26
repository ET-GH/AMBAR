#include <Arduino.h>
#include <RadioLib.h>
#include <SPI.h>
#include <stdlib.h>
#include <string.h>
#include "rocket_protocol.h"

#define LORA_SCK 5
#define LORA_MISO 3
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RST 8
#define LORA_DIO1 9
#define LORA_BUSY 36
#define LORA_TXEN 10
#define LORA_RXEN 21

static constexpr uint32_t UART_BAUD_RATE = 115200;
static constexpr float RADIO_FREQUENCY_MHZ = 2445.0;
static constexpr float RADIO_BANDWIDTH_KHZ = 203.125;
static constexpr uint8_t RADIO_SPREADING_FACTOR = 8;
static constexpr uint8_t RADIO_CODING_RATE_DENOMINATOR = 5;
static constexpr int8_t RADIO_TX_POWER_DBM = 3;
static constexpr uint16_t RADIO_PREAMBLE_SYMBOLS = 12;

/* Explicit wire sizes. Do not use sizeof(struct), because compiler padding may differ. */
static constexpr size_t TELEMETRY_PAYLOAD_SIZE = 26u;
static constexpr size_t EVENT_PAYLOAD_SIZE = 10u;
static constexpr size_t ACK_PAYLOAD_SIZE = 11u;

/*
 * UART records are newline-terminated CSV and contain no spaces.
 *
 * S,status_code,detail
 * T,seq,time_ms,rssi,snr,flags,state,status,alt_dm,vel_cms,acc_cms2,
 *   predicted_dm,target_dm,roll_ddeg,pitch_ddeg,yaw_ddeg,deployment_pct,
 *   sensor_health,failed_reads,message
 * E,seq,time_ms,rssi,snr,changed_flags,current_flags,previous_state,
 *   current_state,status,message,detail
 * A,seq,time_ms,rssi,snr,command_seq,command,result,detail_type,part_index,
 *   part_count,detail
 * H,seq,time_ms,rssi,snr
 * P,source,command_seq,time_ms,link_rssi,link_snr,uptime_ms,tx_packets,
 *   rx_packets,tx_errors,rx_errors,module_last_rssi,module_last_snr,rtt_ms
 *
 * Commands received from the computer use:
 * C,command_code[,argument_0[,argument_1]]
 * Numeric fields may be decimal or 0x-prefixed hexadecimal.
 */
enum GroundStationStatusCode : uint8_t {
  GS_STATUS_BOOT = 0,
  GS_STATUS_RADIO_READY = 1,
  GS_STATUS_RADIO_INIT_FAILED = 2,
  GS_STATUS_RECEIVE_START_FAILED = 3,
  GS_STATUS_RECEIVE_FAILED = 4,
  GS_STATUS_BAD_PACKET_HEADER = 5,
  GS_STATUS_BAD_PACKET_LENGTH = 6,
  GS_STATUS_UNKNOWN_PACKET_TYPE = 7,
  GS_STATUS_PACKET_TOO_LARGE = 8,
  GS_STATUS_SERIAL_OVERFLOW = 9,
  GS_STATUS_SERIAL_BAD_FORMAT = 10,
  GS_STATUS_SERIAL_BAD_COMMAND = 11,
  GS_STATUS_SERIAL_BAD_VALUE = 12,
  GS_STATUS_TRANSMIT_FAILED = 13
};

SX1280 radio = new Module(LORA_CS, LORA_DIO1, LORA_RST, LORA_BUSY);
volatile bool rxFlag = false;
static uint16_t commandSequence = 0;
struct PendingPingResponse {
  uint16_t commandSequence;
  uint32_t sentMs;
  uint32_t rttMs;
  uint32_t uptimeMs;
  uint8_t txPackets;
  uint8_t rxPackets;
  uint8_t txErrors;
  uint8_t rxErrors;
  int16_t lastRssiX10;
  int16_t lastSnrX100;
  uint8_t receivedMask;
  bool active;
  bool rttValid;
};

static PendingPingResponse pendingPing = {};
static uint32_t groundTxPackets = 0;
static uint32_t groundRxPackets = 0;
static uint16_t groundTxErrors = 0;
static uint16_t groundRxErrors = 0;
static uint8_t groundTxSincePing = 0;
static uint8_t groundRxSincePing = 0;
static uint8_t groundTxErrorsSincePing = 0;
static uint8_t groundRxErrorsSincePing = 0;
static float groundLastRssi = 0.0f;
static float groundLastSnr = 0.0f;

void onRadioDio1() {
  rxFlag = true;
}

static void printGroundStatus(uint8_t statusCode, int32_t detail = 0) {
  Serial.print("S,");
  Serial.print(statusCode);
  Serial.print(',');
  Serial.println(detail);
}

static bool startReceiveMode() {
  const int state = radio.startReceive();
  if (state != RADIOLIB_ERR_NONE) {
    printGroundStatus(GS_STATUS_RECEIVE_START_FAILED, state);
    return false;
  }
  return true;
}

static void printTelemetry(const uint8_t *packet,
                           const RocketPacketHeader &header,
                           float rssi,
                           float snr) {
  size_t i = ROCKET_PROTOCOL_HEADER_SIZE;
  const uint16_t flags = RocketProtocol_ReadU16(packet + i); i += 2;
  const uint8_t state = packet[i++];
  const uint8_t status = packet[i++];
  const int16_t altitudeDm = RocketProtocol_ReadI16(packet + i); i += 2;
  const int16_t velocityCms = RocketProtocol_ReadI16(packet + i); i += 2;
  const int16_t accelerationCms2 = RocketProtocol_ReadI16(packet + i); i += 2;
  const uint16_t predictedApogeeDm = RocketProtocol_ReadU16(packet + i); i += 2;
  const uint16_t targetApogeeDm = RocketProtocol_ReadU16(packet + i); i += 2;
  const int16_t rollDdeg = RocketProtocol_ReadI16(packet + i); i += 2;
  const int16_t pitchDdeg = RocketProtocol_ReadI16(packet + i); i += 2;
  const int16_t yawDdeg = RocketProtocol_ReadI16(packet + i); i += 2;
  const uint8_t deploymentPercent = packet[i++];
  const uint8_t sensorHealth = packet[i++];
  const uint16_t failedReads = RocketProtocol_ReadU16(packet + i); i += 2;
  const uint8_t message = packet[i++];

  Serial.print("T,");
  Serial.print(header.sequence); Serial.print(',');
  Serial.print(header.time_ms); Serial.print(',');
  Serial.print(rssi, 1); Serial.print(',');
  Serial.print(snr, 2); Serial.print(',');
  Serial.print(flags); Serial.print(',');
  Serial.print(state); Serial.print(',');
  Serial.print(status); Serial.print(',');
  Serial.print(altitudeDm); Serial.print(',');
  Serial.print(velocityCms); Serial.print(',');
  Serial.print(accelerationCms2); Serial.print(',');
  Serial.print(predictedApogeeDm); Serial.print(',');
  Serial.print(targetApogeeDm); Serial.print(',');
  Serial.print(rollDdeg); Serial.print(',');
  Serial.print(pitchDdeg); Serial.print(',');
  Serial.print(yawDdeg); Serial.print(',');
  Serial.print(deploymentPercent); Serial.print(',');
  Serial.print(sensorHealth); Serial.print(',');
  Serial.print(failedReads); Serial.print(',');
  Serial.println(message);
}

static void printEvent(const uint8_t *packet,
                       const RocketPacketHeader &header,
                       float rssi,
                       float snr) {
  size_t i = ROCKET_PROTOCOL_HEADER_SIZE;
  const uint16_t changedFlags = RocketProtocol_ReadU16(packet + i); i += 2;
  const uint16_t currentFlags = RocketProtocol_ReadU16(packet + i); i += 2;
  const uint8_t previousState = packet[i++];
  const uint8_t currentState = packet[i++];
  const uint8_t status = packet[i++];
  const uint8_t message = packet[i++];
  const uint16_t detail = RocketProtocol_ReadU16(packet + i);

  Serial.print("E,");
  Serial.print(header.sequence); Serial.print(',');
  Serial.print(header.time_ms); Serial.print(',');
  Serial.print(rssi, 1); Serial.print(',');
  Serial.print(snr, 2); Serial.print(',');
  Serial.print(changedFlags); Serial.print(',');
  Serial.print(currentFlags); Serial.print(',');
  Serial.print(previousState); Serial.print(',');
  Serial.print(currentState); Serial.print(',');
  Serial.print(status); Serial.print(',');
  Serial.print(message); Serial.print(',');
  Serial.println(detail);
}

static void printAck(const uint8_t *packet,
                     const RocketPacketHeader &header,
                     float rssi,
                     float snr) {
  size_t i = ROCKET_PROTOCOL_HEADER_SIZE;
  const uint16_t acknowledgedSequence = RocketProtocol_ReadU16(packet + i); i += 2;
  const uint8_t command = packet[i++];
  const uint8_t result = packet[i++];
  const uint8_t detailType = packet[i++];
  const uint8_t partIndex = packet[i++];
  const uint8_t partCount = packet[i++];
  const uint32_t detail = RocketProtocol_ReadU32(packet + i);

  Serial.print("A,");
  Serial.print(header.sequence); Serial.print(',');
  Serial.print(header.time_ms); Serial.print(',');
  Serial.print(rssi, 1); Serial.print(',');
  Serial.print(snr, 2); Serial.print(',');
  Serial.print(acknowledgedSequence); Serial.print(',');
  Serial.print(command); Serial.print(',');
  Serial.print(result); Serial.print(',');
  Serial.print(detailType); Serial.print(',');
  Serial.print(partIndex); Serial.print(',');
  Serial.print(partCount); Serial.print(',');
  Serial.println(detail);

  /* A ping is returned as several ACKs. The first ACK establishes RTT; later
   * ACKs only add statistics and therefore do not change the RTT measurement. */
  if (!pendingPing.active ||
      command != ROCKET_CMD_PING ||
      acknowledgedSequence != pendingPing.commandSequence) {
    return;
  }

  if (result != ROCKET_ACK_OK) {
    pendingPing.active = false;
    return;
  }

  if (partIndex == 0u && !pendingPing.rttValid) {
    pendingPing.rttMs = millis() - pendingPing.sentMs;
    pendingPing.rttValid = true;
  }

  switch (detailType) {
    case ROCKET_ACK_DETAIL_PING_UPTIME:
      pendingPing.uptimeMs = detail;
      pendingPing.receivedMask |= 0x01u;
      break;

    case ROCKET_ACK_DETAIL_PING_COUNTERS:
      pendingPing.txPackets = static_cast<uint8_t>(detail >> 24);
      pendingPing.rxPackets = static_cast<uint8_t>(detail >> 16);
      pendingPing.txErrors = static_cast<uint8_t>(detail >> 8);
      pendingPing.rxErrors = static_cast<uint8_t>(detail);
      pendingPing.receivedMask |= 0x02u;
      break;

    case ROCKET_ACK_DETAIL_PING_SIGNAL:
      pendingPing.lastRssiX10 = static_cast<int16_t>(detail >> 16);
      pendingPing.lastSnrX100 = static_cast<int16_t>(detail & 0xFFFFu);
      pendingPing.receivedMask |= 0x04u;
      break;
  }

  if ((pendingPing.receivedMask & 0x07u) == 0x07u) {
    Serial.print("P,F,");
    Serial.print(acknowledgedSequence); Serial.print(',');
    Serial.print(header.time_ms); Serial.print(',');
    Serial.print(rssi, 1); Serial.print(',');
    Serial.print(snr, 2); Serial.print(',');
    Serial.print(pendingPing.uptimeMs); Serial.print(',');
    Serial.print(pendingPing.txPackets); Serial.print(',');
    Serial.print(pendingPing.rxPackets); Serial.print(',');
    Serial.print(pendingPing.txErrors); Serial.print(',');
    Serial.print(pendingPing.rxErrors); Serial.print(',');
    Serial.print(pendingPing.lastRssiX10 / 10.0f, 1); Serial.print(',');
    Serial.print(pendingPing.lastSnrX100 / 100.0f, 2); Serial.print(',');
    if (pendingPing.rttValid) Serial.println(pendingPing.rttMs);
    else Serial.println(-1);
    pendingPing.active = false;
  }
}

static void printHeartbeat(const RocketPacketHeader &header, float rssi, float snr) {
  Serial.print("H,");
  Serial.print(header.sequence); Serial.print(',');
  Serial.print(header.time_ms); Serial.print(',');
  Serial.print(rssi, 1); Serial.print(',');
  Serial.println(snr, 2);
}

static void parsePacket(const uint8_t *packet, size_t length, float rssi, float snr) {
  RocketPacketHeader header;
  if (!RocketProtocol_DecodeHeader(packet, length, &header)) {
    printGroundStatus(GS_STATUS_BAD_PACKET_HEADER, static_cast<int32_t>(length));
    return;
  }

  size_t requiredLength = ROCKET_PROTOCOL_HEADER_SIZE;
  switch (header.type) {
    case ROCKET_PKT_TELEMETRY:
      requiredLength += TELEMETRY_PAYLOAD_SIZE;
      break;
    case ROCKET_PKT_EVENT:
      requiredLength += EVENT_PAYLOAD_SIZE;
      break;
    case ROCKET_PKT_ACK:
      requiredLength += ACK_PAYLOAD_SIZE;
      break;
    case ROCKET_PKT_HEARTBEAT:
      break;
    default:
      printGroundStatus(GS_STATUS_UNKNOWN_PACKET_TYPE, header.type);
      return;
  }

  if (length < requiredLength) {
    const int32_t detail = (static_cast<int32_t>(requiredLength) << 16)
                         | static_cast<int32_t>(length & 0xFFFFu);
    printGroundStatus(GS_STATUS_BAD_PACKET_LENGTH, detail);
    return;
  }

  switch (header.type) {
    case ROCKET_PKT_TELEMETRY:
      printTelemetry(packet, header, rssi, snr);
      break;
    case ROCKET_PKT_EVENT:
      printEvent(packet, header, rssi, snr);
      break;
    case ROCKET_PKT_ACK:
      printAck(packet, header, rssi, snr);
      break;
    case ROCKET_PKT_HEARTBEAT:
      printHeartbeat(header, rssi, snr);
      break;
  }
}

/* Parses one complete CSV command, validates its arguments, builds the binary
 * protocol packet, and transmits it to the flight computer. */
static bool sendSerialCommand(char *line) {
  char *fields[4] = {nullptr, nullptr, nullptr, nullptr};
  char *save = nullptr;
  size_t fieldCount = 0;

  for (char *token = strtok_r(line, ",", &save); token != nullptr;
       token = strtok_r(nullptr, ",", &save)) {
    if (fieldCount >= 4) {
      printGroundStatus(GS_STATUS_SERIAL_BAD_FORMAT, 4);
      return false;
    }
    fields[fieldCount++] = token;
  }

  if (fieldCount < 2 || strcmp(fields[0], "C") != 0) {
    printGroundStatus(GS_STATUS_SERIAL_BAD_FORMAT, static_cast<int32_t>(fieldCount));
    return false;
  }

  auto parseNumber = [](const char *text, long &value) -> bool {
    if (text == nullptr || *text == '\0') return false;
    char *end = nullptr;
    value = strtol(text, &end, 0);
    return end != text && *end == '\0';
  };

  long commandValue = 0;
  long argument0 = 0;
  long argument1 = 0;
  if (!parseNumber(fields[1], commandValue) || commandValue < 0 || commandValue > 255) {
    printGroundStatus(GS_STATUS_SERIAL_BAD_COMMAND, commandValue);
    return false;
  }
  if (fieldCount >= 3 && !parseNumber(fields[2], argument0)) {
    printGroundStatus(GS_STATUS_SERIAL_BAD_VALUE, 0);
    return false;
  }
  if (fieldCount >= 4 && !parseNumber(fields[3], argument1)) {
    printGroundStatus(GS_STATUS_SERIAL_BAD_VALUE, 1);
    return false;
  }

  const uint8_t command = static_cast<uint8_t>(commandValue);
  uint8_t payload[8] = {0};
  uint8_t payloadLength = 0;

  switch (command) {
    case ROCKET_CMD_NOP:
    case ROCKET_CMD_PING:
    case ROCKET_CMD_REQUEST_SNAPSHOT:
    case ROCKET_CMD_RETURN_STANDARD:
    case ROCKET_CMD_CLEAR_FAULTS:
    case ROCKET_CMD_CLEAR_MEMORY:
      if (fieldCount != 2) goto badLength;
      break;

    case ROCKET_CMD_SET_TARGET_APOGEE:
      if (fieldCount != 3) goto badLength;
      if (argument0 < 0 || argument0 > 65535) goto badValue;
      RocketProtocol_WriteU16(payload, static_cast<uint16_t>(argument0));
      payloadLength = 2;
      break;

    case ROCKET_CMD_SET_CONTROLLER:
      if (fieldCount != 3) goto badLength;
      if (argument0 < 0 || argument0 > 1) goto badValue;
      payload[0] = static_cast<uint8_t>(argument0);
      payloadLength = 1;
      break;

    case ROCKET_CMD_SET_MODE:
      if (fieldCount != 3 && fieldCount != 4) goto badLength;
      if (argument0 < ROCKET_MODE_STANDBY || argument0 > ROCKET_MODE_TEST ||
          argument1 < 0 || argument1 > 65535) goto badValue;
      payload[0] = static_cast<uint8_t>(argument0);
      RocketProtocol_WriteU16(payload + 1, static_cast<uint16_t>(argument1));
      payloadLength = 3;
      break;

    case ROCKET_CMD_MANUAL_AIRBRAKE:
      if (fieldCount != 3) goto badLength;
      if (argument0 < 0 || argument0 > 100) goto badValue;
      payload[0] = static_cast<uint8_t>(argument0);
      payloadLength = 1;
      break;

    case ROCKET_CMD_SET_SUBSYSTEM:
      if (fieldCount != 4) goto badLength;
      if (argument0 < ROCKET_SUBSYSTEM_RADIO ||
          argument0 > ROCKET_SUBSYSTEM_FLIGHT_COMPUTER ||
          argument1 < 0 || argument1 > 1) goto badValue;
      payload[0] = static_cast<uint8_t>(argument0);
      payload[1] = static_cast<uint8_t>(argument1);
      payloadLength = 2;
      break;

    case ROCKET_CMD_MOTOR_STEPS:
      if (fieldCount != 3) goto badLength;
      if (argument0 < -32768 || argument0 > 32767) goto badValue;
      RocketProtocol_WriteI16(payload, static_cast<int16_t>(argument0));
      payloadLength = 2;
      break;

    case ROCKET_CMD_REQUEST_DIAGNOSTICS:
      if (fieldCount != 2 && fieldCount != 3) goto badLength;
      if (argument0 < ROCKET_DIAG_ALL || argument0 > ROCKET_DIAG_STORAGE) goto badValue;
      payload[0] = static_cast<uint8_t>(argument0);
      payloadLength = 1;
      break;

    default:
      printGroundStatus(GS_STATUS_SERIAL_BAD_COMMAND, command);
      return false;
  }

  {
    const uint16_t sequence = ++commandSequence;
    const uint32_t nowMs = millis();
    uint8_t packet[ROCKET_PROTOCOL_HEADER_SIZE + 2u + sizeof(payload)] = {0};
    RocketProtocol_EncodeHeader(packet, sizeof(packet), ROCKET_PKT_COMMAND, sequence, nowMs);
    packet[ROCKET_PROTOCOL_HEADER_SIZE] = command;
    packet[ROCKET_PROTOCOL_HEADER_SIZE + 1u] = payloadLength;
    memcpy(packet + ROCKET_PROTOCOL_HEADER_SIZE + 2u, payload, payloadLength);

    /* Report this module immediately. The one-byte counters cover activity
     * since the previous ping and saturate at 255 instead of wrapping. */
    if (command == ROCKET_CMD_PING) {
      pendingPing = {};
      pendingPing.commandSequence = sequence;
      pendingPing.sentMs = nowMs;
      pendingPing.active = true;

      Serial.print("P,G,");
      Serial.print(sequence); Serial.print(',');
      Serial.print(nowMs); Serial.print(',');
      Serial.print(groundLastRssi, 1); Serial.print(',');
      Serial.print(groundLastSnr, 2); Serial.print(',');
      Serial.print(nowMs); Serial.print(',');
      Serial.print(groundTxSincePing); Serial.print(',');
      Serial.print(groundRxSincePing); Serial.print(',');
      Serial.print(groundTxErrorsSincePing); Serial.print(',');
      Serial.print(groundRxErrorsSincePing); Serial.print(',');
      Serial.print(groundLastRssi, 1); Serial.print(',');
      Serial.print(groundLastSnr, 2); Serial.println(",0");

      groundTxSincePing = 0;
      groundRxSincePing = 0;
      groundTxErrorsSincePing = 0;
      groundRxErrorsSincePing = 0;
    }

    rxFlag = false;
    const int state = radio.transmit(packet, ROCKET_PROTOCOL_HEADER_SIZE + 2u + payloadLength);
    rxFlag = false;  // TX-done can assert DIO1 while the receive callback is installed.

    if (state == RADIOLIB_ERR_NONE) {
      ++groundTxPackets;
      if (groundTxSincePing < 0xFFu) ++groundTxSincePing;
    } else {
      ++groundTxErrors;
      if (groundTxErrorsSincePing < 0xFFu) ++groundTxErrorsSincePing;
      if (command == ROCKET_CMD_PING) pendingPing.active = false;
      printGroundStatus(GS_STATUS_TRANSMIT_FAILED, state);
    }

    startReceiveMode();
    return state == RADIOLIB_ERR_NONE;
  }

badLength:
  printGroundStatus(GS_STATUS_SERIAL_BAD_FORMAT, command);
  return false;
badValue:
  printGroundStatus(GS_STATUS_SERIAL_BAD_VALUE, command);
  return false;
}

/* Non-blocking serial line collector. Call this every loop iteration so UART
 * commands are handled even while no radio packet is arriving. */
static void readSerialCommands() {
  static char line[96];
  static size_t used = 0;

  while (Serial.available() > 0) {
    const char c = static_cast<char>(Serial.read());
    if (c == '\r') continue;

    if (c == '\n') {
      if (used > 0) {
        line[used] = '\0';
        sendSerialCommand(line);
        used = 0;
      }
      continue;
    }

    if (used + 1u >= sizeof(line)) {
      used = 0;
      printGroundStatus(GS_STATUS_SERIAL_OVERFLOW, sizeof(line));
      continue;
    }

    line[used++] = c;
  }
}

void setup() {
  Serial.begin(UART_BAUD_RATE);
  delay(250);
  printGroundStatus(GS_STATUS_BOOT);

  SPI.begin(LORA_SCK, LORA_MISO, LORA_MOSI, LORA_CS);
  radio.setRfSwitchPins(LORA_RXEN, LORA_TXEN);

  const int state = radio.begin(RADIO_FREQUENCY_MHZ,
                                RADIO_BANDWIDTH_KHZ,
                                RADIO_SPREADING_FACTOR,
                                RADIO_CODING_RATE_DENOMINATOR,
                                RADIOLIB_SX128X_SYNC_WORD_PRIVATE,
                                RADIO_TX_POWER_DBM,
                                RADIO_PREAMBLE_SYMBOLS);

  if (state != RADIOLIB_ERR_NONE) {
    printGroundStatus(GS_STATUS_RADIO_INIT_FAILED, state);
    while (true) {
      delay(1000);
    }
  }

  delay(2000);

  radio.explicitHeader();
  radio.setCRC(2);
  radio.setDio1Action(onRadioDio1);

  printGroundStatus(GS_STATUS_RADIO_READY, ROCKET_PROTOCOL_VERSION);
  startReceiveMode();
}

void loop()
{
    /*
     * Continue checking USB/UART commands every loop iteration.
     */
    readSerialCommands();

    /*
     * No SX1280 receive interrupt has occurred.
     */
    if (!rxFlag)
    {
        return;
    }

    /*
     * Consume the current interrupt indication.
     *
     * After receive mode is restarted below, a new packet can set rxFlag
     * again while the current packet is being parsed and printed.
     */
    rxFlag = false;

    const size_t length = radio.getPacketLength();

    if (length > ROCKET_PROTOCOL_MAX_PACKET)
    {
        /*
         * Restart reception before printing the error. Serial output can take
         * long enough for the next multipart ACK to begin arriving.
         */
        startReceiveMode();

        printGroundStatus(
            GS_STATUS_PACKET_TOO_LARGE,
            static_cast<int32_t>(length));

        return;
    }

    uint8_t packet[ROCKET_PROTOCOL_MAX_PACKET];

    const int state = radio.readData(packet, length);

    if (state == RADIOLIB_ERR_NONE)
    {
        ++groundRxPackets;

        if (groundRxSincePing < 0xFFu)
        {
            ++groundRxSincePing;
        }

        /*
         * RSSI and SNR belong to the packet that was just read. Save them
         * before startReceiveMode() changes the radio state.
         */
        const float packetRssi = radio.getRSSI();
        const float packetSnr = radio.getSNR();

        groundLastRssi = packetRssi;
        groundLastSnr = packetSnr;

        /*
         * CRITICAL CHANGE:
         *
         * Rearm the SX1280 before parsing or printing the packet. PING and
         * diagnostics produce several ACK packets in rapid succession.
         */
        startReceiveMode();

        /*
         * Parsing can now safely perform Serial.print() operations while the
         * SX1280 is already listening for the next ACK.
         */
        parsePacket(
            packet,
            length,
            packetRssi,
            packetSnr);
    }
    else
    {
        ++groundRxErrors;

        if (groundRxErrorsSincePing < 0xFFu)
        {
            ++groundRxErrorsSincePing;
        }

        /*
         * Rearm reception before printing the error for the same reason:
         * UART output must not unnecessarily delay the next receive window.
         */
        startReceiveMode();

        printGroundStatus(
            GS_STATUS_RECEIVE_FAILED,
            state);
    }
}
