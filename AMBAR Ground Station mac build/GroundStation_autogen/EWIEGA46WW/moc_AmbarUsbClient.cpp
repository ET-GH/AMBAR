/****************************************************************************
** Meta object code from reading C++ file 'AmbarUsbClient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../AmbarUsbClient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AmbarUsbClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14AmbarUsbClientE_t {};
} // unnamed namespace

template <> constexpr inline auto AmbarUsbClient::qt_create_metaobjectdata<qt_meta_tag_ZN14AmbarUsbClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AmbarUsbClient",
        "portsScanned",
        "",
        "AmbarUsbClient::PortList",
        "ports",
        "connectionOpened",
        "name",
        "deviceVerified",
        "disconnected",
        "commandQueued",
        "sequence",
        "command",
        "commandAcknowledged",
        "detail",
        "commandRejected",
        "result",
        "commandTimedOut",
        "packetReceived",
        "AmbarUsbClient::Packet",
        "packet",
        "packetTransmitted",
        "telemetryReceived",
        "AmbarUsbClient::Telemetry",
        "telemetry",
        "eventReceived",
        "AmbarUsbClient::Event",
        "event",
        "acknowledgementReceived",
        "AmbarUsbClient::Ack",
        "ack",
        "simulationReceived",
        "AmbarUsbClient::SimulationSample",
        "sample",
        "actuatorStatusReceived",
        "AmbarUsbClient::ActuatorStatus",
        "status",
        "variableHilStateReceived",
        "AmbarUsbClient::VariableHilState",
        "state",
        "variableHilConfigReceived",
        "AmbarUsbClient::VariableHilConfig",
        "config",
        "heartbeatReceived",
        "AmbarUsbClient::Heartbeat",
        "heartbeat",
        "protocolError",
        "message",
        "transportError",
        "csvError",
        "csvWriteProgress",
        "totalBytes",
        "archiveRecordReceived",
        "recordsReceived",
        "csvBytesWritten",
        "PacketType",
        "PacketTelemetry",
        "PacketEvent",
        "PacketActuatorStatus",
        "PacketVariableHilState",
        "PacketVariableHilConfig",
        "PacketCommand",
        "PacketAck",
        "PacketHeartbeat",
        "PacketSimulation",
        "PacketVariableHilConfigUpload",
        "CommandCode",
        "CommandNop",
        "CommandPing",
        "CommandRequestSnapshot",
        "CommandSetTargetApogee",
        "CommandSetArmed",
        "CommandSetMode",
        "CommandReturnStandard",
        "CommandManualAirbrake",
        "CommandEmergencyStop",
        "CommandHome",
        "CommandRetract",
        "CommandPadReset",
        "CommandSaveConfig",
        "CommandBenchMoveSteps",
        "CommandSimulationStart",
        "CommandSimulationStop",
        "CommandHilSetOverride",
        "CommandVariableHilGetConfig",
        "CommandVariableHilConfigUpload",
        "CommandRecoverKnownFullRetract",
        "CommandStartLog",
        "CommandStopLog",
        "CommandEraseLog",
        "AckCode",
        "AckOk",
        "AckBadLength",
        "AckBadValue",
        "AckUnsupported",
        "AckBusy",
        "AckExecutionError",
        "AckBadCrc",
        "HilOverrideMode",
        "HilOverrideOff",
        "HilOverrideForceFull",
        "HilOverrideForceHome"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'portsScanned'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::PortList &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'connectionOpened'
        QtMocHelpers::SignalData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'deviceVerified'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'disconnected'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'commandQueued'
        QtMocHelpers::SignalData<void(quint16, quint8)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UShort, 10 }, { QMetaType::UChar, 11 },
        }}),
        // Signal 'commandAcknowledged'
        QtMocHelpers::SignalData<void(quint16, quint8, quint16)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UShort, 10 }, { QMetaType::UChar, 11 }, { QMetaType::UShort, 13 },
        }}),
        // Signal 'commandRejected'
        QtMocHelpers::SignalData<void(quint16, quint8, quint8, quint16)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UShort, 10 }, { QMetaType::UChar, 11 }, { QMetaType::UChar, 15 }, { QMetaType::UShort, 13 },
        }}),
        // Signal 'commandTimedOut'
        QtMocHelpers::SignalData<void(quint16, quint8)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UShort, 10 }, { QMetaType::UChar, 11 },
        }}),
        // Signal 'packetReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::Packet &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'packetTransmitted'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::Packet &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'telemetryReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::Telemetry &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Signal 'eventReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::Event &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Signal 'acknowledgementReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::Ack &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 29 },
        }}),
        // Signal 'simulationReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::SimulationSample &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 32 },
        }}),
        // Signal 'actuatorStatusReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::ActuatorStatus &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 34, 35 },
        }}),
        // Signal 'variableHilStateReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::VariableHilState &)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 37, 38 },
        }}),
        // Signal 'variableHilConfigReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::VariableHilConfig &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Signal 'heartbeatReceived'
        QtMocHelpers::SignalData<void(const AmbarUsbClient::Heartbeat &)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Signal 'protocolError'
        QtMocHelpers::SignalData<void(const QString &)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 46 },
        }}),
        // Signal 'transportError'
        QtMocHelpers::SignalData<void(const QString &)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 46 },
        }}),
        // Signal 'csvError'
        QtMocHelpers::SignalData<void(const QString &)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 46 },
        }}),
        // Signal 'csvWriteProgress'
        QtMocHelpers::SignalData<void(qint64)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 50 },
        }}),
        // Signal 'archiveRecordReceived'
        QtMocHelpers::SignalData<void(quint64, qint64)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULongLong, 52 }, { QMetaType::LongLong, 53 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PacketType'
        QtMocHelpers::EnumData<enum PacketType>(54, 54, QMC::EnumFlags{}).add({
            {   55, PacketType::PacketTelemetry },
            {   56, PacketType::PacketEvent },
            {   57, PacketType::PacketActuatorStatus },
            {   58, PacketType::PacketVariableHilState },
            {   59, PacketType::PacketVariableHilConfig },
            {   60, PacketType::PacketCommand },
            {   61, PacketType::PacketAck },
            {   62, PacketType::PacketHeartbeat },
            {   63, PacketType::PacketSimulation },
            {   64, PacketType::PacketVariableHilConfigUpload },
        }),
        // enum 'CommandCode'
        QtMocHelpers::EnumData<enum CommandCode>(65, 65, QMC::EnumFlags{}).add({
            {   66, CommandCode::CommandNop },
            {   67, CommandCode::CommandPing },
            {   68, CommandCode::CommandRequestSnapshot },
            {   69, CommandCode::CommandSetTargetApogee },
            {   70, CommandCode::CommandSetArmed },
            {   71, CommandCode::CommandSetMode },
            {   72, CommandCode::CommandReturnStandard },
            {   73, CommandCode::CommandManualAirbrake },
            {   74, CommandCode::CommandEmergencyStop },
            {   75, CommandCode::CommandHome },
            {   76, CommandCode::CommandRetract },
            {   77, CommandCode::CommandPadReset },
            {   78, CommandCode::CommandSaveConfig },
            {   79, CommandCode::CommandBenchMoveSteps },
            {   80, CommandCode::CommandSimulationStart },
            {   81, CommandCode::CommandSimulationStop },
            {   82, CommandCode::CommandHilSetOverride },
            {   83, CommandCode::CommandVariableHilGetConfig },
            {   84, CommandCode::CommandVariableHilConfigUpload },
            {   85, CommandCode::CommandRecoverKnownFullRetract },
            {   86, CommandCode::CommandStartLog },
            {   87, CommandCode::CommandStopLog },
            {   88, CommandCode::CommandEraseLog },
        }),
        // enum 'AckCode'
        QtMocHelpers::EnumData<enum AckCode>(89, 89, QMC::EnumFlags{}).add({
            {   90, AckCode::AckOk },
            {   91, AckCode::AckBadLength },
            {   92, AckCode::AckBadValue },
            {   93, AckCode::AckUnsupported },
            {   94, AckCode::AckBusy },
            {   95, AckCode::AckExecutionError },
            {   96, AckCode::AckBadCrc },
        }),
        // enum 'HilOverrideMode'
        QtMocHelpers::EnumData<enum HilOverrideMode>(97, 97, QMC::EnumFlags{}).add({
            {   98, HilOverrideMode::HilOverrideOff },
            {   99, HilOverrideMode::HilOverrideForceFull },
            {  100, HilOverrideMode::HilOverrideForceHome },
        }),
    };
    return QtMocHelpers::metaObjectData<AmbarUsbClient, qt_meta_tag_ZN14AmbarUsbClientE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AmbarUsbClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AmbarUsbClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AmbarUsbClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14AmbarUsbClientE_t>.metaTypes,
    nullptr
} };

void AmbarUsbClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AmbarUsbClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->portsScanned((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::PortList>>(_a[1]))); break;
        case 1: _t->connectionOpened((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->deviceVerified((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->disconnected((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->commandQueued((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2]))); break;
        case 5: _t->commandAcknowledged((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint16>>(_a[3]))); break;
        case 6: _t->commandRejected((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint16>>(_a[4]))); break;
        case 7: _t->commandTimedOut((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2]))); break;
        case 8: _t->packetReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::Packet>>(_a[1]))); break;
        case 9: _t->packetTransmitted((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::Packet>>(_a[1]))); break;
        case 10: _t->telemetryReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::Telemetry>>(_a[1]))); break;
        case 11: _t->eventReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::Event>>(_a[1]))); break;
        case 12: _t->acknowledgementReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::Ack>>(_a[1]))); break;
        case 13: _t->simulationReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::SimulationSample>>(_a[1]))); break;
        case 14: _t->actuatorStatusReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::ActuatorStatus>>(_a[1]))); break;
        case 15: _t->variableHilStateReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::VariableHilState>>(_a[1]))); break;
        case 16: _t->variableHilConfigReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::VariableHilConfig>>(_a[1]))); break;
        case 17: _t->heartbeatReceived((*reinterpret_cast<std::add_pointer_t<AmbarUsbClient::Heartbeat>>(_a[1]))); break;
        case 18: _t->protocolError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->transportError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->csvError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->csvWriteProgress((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 22: _t->archiveRecordReceived((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::PortList >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::Packet >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::Packet >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::Telemetry >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::Event >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::Ack >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::SimulationSample >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::ActuatorStatus >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::VariableHilState >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::VariableHilConfig >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AmbarUsbClient::Heartbeat >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::PortList & )>(_a, &AmbarUsbClient::portsScanned, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const QString & )>(_a, &AmbarUsbClient::connectionOpened, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const QString & )>(_a, &AmbarUsbClient::deviceVerified, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const QString & )>(_a, &AmbarUsbClient::disconnected, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(quint16 , quint8 )>(_a, &AmbarUsbClient::commandQueued, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(quint16 , quint8 , quint16 )>(_a, &AmbarUsbClient::commandAcknowledged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(quint16 , quint8 , quint8 , quint16 )>(_a, &AmbarUsbClient::commandRejected, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(quint16 , quint8 )>(_a, &AmbarUsbClient::commandTimedOut, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::Packet & )>(_a, &AmbarUsbClient::packetReceived, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::Packet & )>(_a, &AmbarUsbClient::packetTransmitted, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::Telemetry & )>(_a, &AmbarUsbClient::telemetryReceived, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::Event & )>(_a, &AmbarUsbClient::eventReceived, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::Ack & )>(_a, &AmbarUsbClient::acknowledgementReceived, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::SimulationSample & )>(_a, &AmbarUsbClient::simulationReceived, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::ActuatorStatus & )>(_a, &AmbarUsbClient::actuatorStatusReceived, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::VariableHilState & )>(_a, &AmbarUsbClient::variableHilStateReceived, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::VariableHilConfig & )>(_a, &AmbarUsbClient::variableHilConfigReceived, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const AmbarUsbClient::Heartbeat & )>(_a, &AmbarUsbClient::heartbeatReceived, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const QString & )>(_a, &AmbarUsbClient::protocolError, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const QString & )>(_a, &AmbarUsbClient::transportError, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(const QString & )>(_a, &AmbarUsbClient::csvError, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(qint64 )>(_a, &AmbarUsbClient::csvWriteProgress, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (AmbarUsbClient::*)(quint64 , qint64 )>(_a, &AmbarUsbClient::archiveRecordReceived, 22))
            return;
    }
}

const QMetaObject *AmbarUsbClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmbarUsbClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14AmbarUsbClientE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AmbarUsbClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void AmbarUsbClient::portsScanned(const AmbarUsbClient::PortList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void AmbarUsbClient::connectionOpened(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void AmbarUsbClient::deviceVerified(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void AmbarUsbClient::disconnected(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void AmbarUsbClient::commandQueued(quint16 _t1, quint8 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void AmbarUsbClient::commandAcknowledged(quint16 _t1, quint8 _t2, quint16 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}

// SIGNAL 6
void AmbarUsbClient::commandRejected(quint16 _t1, quint8 _t2, quint8 _t3, quint16 _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 7
void AmbarUsbClient::commandTimedOut(quint16 _t1, quint8 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void AmbarUsbClient::packetReceived(const AmbarUsbClient::Packet & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void AmbarUsbClient::packetTransmitted(const AmbarUsbClient::Packet & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void AmbarUsbClient::telemetryReceived(const AmbarUsbClient::Telemetry & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void AmbarUsbClient::eventReceived(const AmbarUsbClient::Event & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void AmbarUsbClient::acknowledgementReceived(const AmbarUsbClient::Ack & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void AmbarUsbClient::simulationReceived(const AmbarUsbClient::SimulationSample & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void AmbarUsbClient::actuatorStatusReceived(const AmbarUsbClient::ActuatorStatus & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void AmbarUsbClient::variableHilStateReceived(const AmbarUsbClient::VariableHilState & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void AmbarUsbClient::variableHilConfigReceived(const AmbarUsbClient::VariableHilConfig & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void AmbarUsbClient::heartbeatReceived(const AmbarUsbClient::Heartbeat & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void AmbarUsbClient::protocolError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void AmbarUsbClient::transportError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void AmbarUsbClient::csvError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}

// SIGNAL 21
void AmbarUsbClient::csvWriteProgress(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}

// SIGNAL 22
void AmbarUsbClient::archiveRecordReceived(quint64 _t1, qint64 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1, _t2);
}
QT_WARNING_POP
