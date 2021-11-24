/*
 * File Name: ble_uart_example.cpp
 * Hardware needed: Any ESP32 dev. board
 *
 * ESP32 Dev. Board: https://www.sparkfun.com/products/15663
 *
 * Copyright 2021, Mateo Segura, All rights reserved.
 */

#include <Arduino.h>
#include <som/som.h>

//******************** READ ME

//******************** SETTINGS

#define UART0_BAUD_RATE 115200         // Set the baudrate of the terminal uart port
#define MICROS_TIMESTAMP_ENABLED false // Set to true to enabled microsecond time stamp in terminal messages
#define SYSTEM_TIME_ENABLED false      // Set to true if using a real time clock. Refer to "rtc_example.cpp" for more

//******************** UTILITIES OBJECTS
SystemOnModule SoM;

//******************** METHODS

//********************  SETUP
void setup()
{
  // 1. Init UART0 (Serial)
  esp.uart0.begin(UART0_BAUD_RATE);

  esp.uart0.println("\n\n");
  esp.uart0.println("************************************************************************************************************");
  esp.uart0.println("*                                      Bluetooth Server Example                                            *");
  esp.uart0.println("************************************************************************************************************");
  esp.uart0.println("\n\n");

  // 2. Init Terminal
  terminal.begin(esp.uart0, MICROS_TIMESTAMP_ENABLED, SYSTEM_TIME_ENABLED);

  // 3. Begin SoM
  SoM.initAll(true);
}

//********************  LOOP
void loop()
{
  bleServer.sendDataToClient("Hello there from esp!");
  delay(10);
}

//******************** METHODS DEFINITIONS

// End.