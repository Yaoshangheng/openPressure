# Protocentral OpenPressure

![OpenPressure](/docs/images/openpressure.jpg)

OpenPressure is a result of our work in trying to interface pressure sensors to an ADC as well as a display system based on Arduino. We found the ADS1220 to be a great chip that can directly take a 4-wire, 3-wire or a 2-wire sensor and give the digital output. 

Combine this powerful functionality with an ATSAMD21 micro-controller and you've got your very own Arduino-compatible pressure and temperature sensor interface system.

Features
--------
* TI ADS1220 24-bit ADC
* 4-wire sensor can be interfaced directly to the inputs
* On-board 5V band-gap voltage reference
* ATSAMD21 microcontroller loaded with Arduino M0/Zero bootloader
* Programmable with the Arduino IDE
* USB CDC Interface for data transfer
* "Cap" compatibility to add Bluetooth/WiFi/SD Card interfaces
* On-board 3.7V Li-Poly battery with charger
* On-board Boost DC/DC converter 


Repository Contents
-------------------
* **/hardware** - All Eagle design files (.brd, .sch)
* **/software** - Arduino libraries and example code
* **/docs** - Additional Documentation

Board Overview
--------------
![ labelled](/docs/images/openpressure-labelled.jpg)

How to setup Arduino support for openPressure
---------------------------------------------------
OpenPressure is powered by the Arduino Zero board support file.The first thing you will need to do is to download the latest release of the Arduino IDE. You will need to be using version 1.6.4 or higher. 

If you want to program your Zero while offline you need to install the Arduino Desktop IDE and add the Atmel SAMD Core to it. This simple procedure is done selecting Tools menu, then Boards and last Boards Manager, as documented in the Arduino Boards Manager page. 

* Select Tools > Board > Board Manager
* You should find Arduino SAMD(32-bit ARM cortex-M0+) boards listed in the Board Manager window.

 ![board_manager](/docs/images/MKR_Zero_BrdMgrAdd.jpg)
 
* Click the “Install” button on the chosen category.The download process will begin and install the toolchain for SAMD microcontrollers.
* Restart Arduino and look under Tools > Boards and you should see the addition of the Arduino boards in your board list.
![board](/docs/images/selectBoard.png)

Setup Arduino Sketch
--------------------
We have provided a few Arduino sketch examples . They are designed to work right away with no changes. To make the examples work with your board, you simply need to upload the code to your board.

License Information
-------------------
This product is open source!

Please use, reuse, and modify these files as you see fit. Please maintain attribution to Protocentral and release anything derivative under the same license.
