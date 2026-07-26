# AMBAR
The software and hardware of the AMBAR project

Utilized Firmware includes all the logic used for our system.

Measurement & Control includes logic and API used for the measurement and control of the system. Airbrake.c includes references to a tmc5240 driver. Utilized Firmware has the completed driver but if your system used something else then changes must be made in the airbrake logic.

Communication includes logic and api used for communication and data between the flight computer and ground station. radio_bridge includes references to an sx1280 driver. Utilized Firmware has the completed driver but if your system used something else then changes must be made in the bridge logic. usb_comm includes references to the STM32 USB drivers. Utilized Firmware has the completed driver but if your system used something else then changes must be made in the usb logic.

GroundStation includes all the files used for qt application. Qt libraries were used for each of the integration files. The architecture can still be used if you don't want to use QT but the function calls will not work without the installed QT libraries.
