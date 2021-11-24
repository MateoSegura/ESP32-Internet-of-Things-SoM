#pragma once

#include <Arduino.h>
#include <esp32_utilities.h>
#include <som/settings/soc_pinout.h>
#include <som/settings/soc_clk_freq.h>

#include <ACAN2517FD.h>
#include "Adafruit_NeoPixel.h"

// BLE Service
#define BLE_NAME "BLE Example"
#define SERVICE_UUID "6E400001-B5A3-F393-E0A9-E50E24DCCA9E" // UART service UUID
#define CHARACTERISTIC_UUID "6E400002-B5A3-F393-E0A9-E50E24DCCA9E"

extern SystemOnChip esp;
extern Terminal terminal;
extern EMMC_Memory emmc;
extern BluetoothLowEnergyServer bleServer;
extern RealTimeClock rtc;
extern SX1509 io_expansion;
extern AD7689 adc;
extern ACAN2517FD can;

extern Adafruit_NeoPixel pixels;

class SystemOnModule
{
public:
    SystemOnModule()
    {
        debugging_enabled = false;
    }

    DateTime system_time;

    void onBootError();

    void initAll(bool debug_enabled);

    bool initIOExpansion();
    bool initRTC();
    bool initADC();
    bool initCAN();
    bool initEMMC();
    void initLED();

    bool initBLE();

protected:
    bool debugging_enabled;
};

extern SystemOnModule SoM;