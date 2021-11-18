# ESP32-Internet-of-Things-SoM

![alt text](https://github.com/MateoSegura/ESP32-Internet-of-Things-SoM/blob/main/images/som_w_carrier_board.jpg)

A versatile IoT development platform, designed to accelerate development time, and create performant microcontroller embedded applications.

This board combines hardware & sensors that are widely used in industrial, and internet of things applications, where a right balance of power, performance & connectivity are required.

Hardware used:

- Dual core MCU ESP32
- MCP2518FD CAN 2.0B/FD Controller
    - Up to 5Mb/s
    - Software selectable 120 Ohms termination
- AD7689 16-bit ASR Analog to Digital (ADC) converter
    - 8-Inputs
    - Up to 150K samples/second
- MPU9250 Internal Motion Unit (IMU)
    - Accelerometer, Gyroscope & Magnemometer
- BME688 Environmental sensor
    - Temperature, Humidity & Barometric Pressure
- RV-3028 Real Time Clock (RTC)
- Up to 128Gb eMMC memory

This hardware is combined in a System on Module (SoM) with a small footprint (4cm x 5cm), in a 4-layer board All signals are routed out through high density connectors.

![alt text](https://github.com/MateoSegura/ESP32-Internet-of-Things-SoM/blob/main/images/som_pcb_top.jpg)

## Software support

The ESP32 Utilities Libraries were created to abstract & ease a lot of the over head code that is needed when using any of the hardware in this board, such as:

- Debugging
- Hardware Initialization
- Error handling

They also include drivers for all the hardware in the SoM, which is mostly based on open source code from companies like Sparkfun. 

These libraries implement useful methods that involve any of the systems on the module, such as writting/reading files, bluetooth communication, usb serial communication & file download, high-data rate analog sampling, amongst other things.

[ESP32 Utilities Libraries](https://github.com/MateoSegura/ESP32-Utilities)

## Hardware support

The schematics for the module itself are not given. However, the documentation below has diagrams & connections for each system, along with explanations, examples & notes to help you integrate any of these system in your own design.

[ESP32 SoM Hardware Documentation](https://www.notion.so/ESP32-SoM-Hardware-Documentation-87b4bec93dd54ebaa275c7d341c4cf4d)


If you're interested in buying one, send me an email: mateo.segura413@gmail.com
