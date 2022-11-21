# FunkyNERD ESP32 Relay Board

## Specifications:

* MCU: Espressif ESP32-WROOM-32-N4 ([Datasheet](docs/2108131730_Espressif-Systems-ESP32-WROOM-32-N4_C82899.pdf))
* FLASH: 4MB
* BLUETOOTH: v4.2 BR/EDR and BLE specification
* WIFI: 802.11 b/g/n (802.11n up to 150 Mbps)
* DC INPUT: 7-40 Volts
* RELAY: 4x Optocoupler Isolated, 250VAC/10A, 30VDC/10A, Blue LED Indicator
* EXPANSION: 18x GPIO w/ 2x 3.3V and GND
* LED: Programmable Green LED on GPIO13
* USB: 2.0 CH340 interface chip.  ([Driver download](http://www.wch-ic.com/search?q=CH340&t=downloads))
* DIMENSIONS: 85mmx85mm ([3D Model](docs/3D_PCB1_2022-11-21.step))

## Quick start:

### Compiling Examples with **PlatformIO**

1. Install [Visual Studio Code](https://code.visualstudio.com/) and [Python 3.0](https://www.python.org/).
2. Install the PlatformIO extension by searching for `PlatformIO` in the VSCode extensions page.  When the installation is complete, restart VSCode.
3. Open the example project.  Go to file - > Open folder and select the FN_ESP_RELAY folder.
4. In the platforio.ini file select the project you want to compile and upload.
5. Connect your relay board to your computer with a USB cable.
6. To compile and upload, click the (→) symbol in the lower left corner.

You click the plug icon to monitor the serial output from the board while it runs.

## FN_ESP_RELAY_4 Pinout
![](images/FN_ESP_RELAY_4.jpg)

