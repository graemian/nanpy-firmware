#pragma once

#define BAUDRATE 115200

#define USE_Servo                                   1
#define USE_Tone                                    1
#define USE_LiquidCrystal                           1
#define USE_Stepper                                 1
#define USE_EEPROM                                  1
#define USE_RAM                                     1
#define USE_Define                                  1
#define USE_ArduinoCore                             1
#define USE_Watchdog                                1
#define USE_Register                                1
#define USE_Info                                    1
#define USE_Counter                                 0
#define USE_Wire                                    1

// external libraries should be installed for the following features:
#define USE_OneWire                                 0
#define USE_DallasTemperature                       0
#define USE_CapacitiveSensor                        0

// https://github.com/adafruit/DHT-sensor-library
#define USE_DHT                                     0

// https://bitbucket.org/fmalpartida/new-liquidcrystal
#define USE_LiquidCrystal_I2C                       0
