/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Zim_Boardv6 Arduino Mega 
 */

#ifndef __AVR_ATmega2560__
  #error "Oops! Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu."
#endif

// *******************************************************************
// If you don't plan to and more than 2 extruders just uncomment below
// *******************************************************************
//#if HOTENDS > 2 || E_STEPPERS > 2
//  #error "Azteeg X3 supports up to 2 hotends / E-steppers. Comment out this line to continue."
//#endif

#if ENABLED(CASE_LIGHT_ENABLE) && !PIN_EXISTS(CASE_LIGHT)
  #define CASE_LIGHT_PIN    6   // Define before RAMPS pins include
#endif
#define BOARD_NAME "ZIM"



//******************************
// Servos
//******************************
#define SERVO0_PIN          -1   // SERVO1 port
#define SERVO1_PIN          -1   // SERVO2 port

//******************************
// Limit Switches
//******************************
#define X_MIN_PIN           3
#ifndef X_MAX_PIN
  #define X_MAX_PIN         2
#endif
#define Y_MIN_PIN           4
#define Y_MAX_PIN           5
#define Z_MIN_PIN           18
#define Z_MAX_PIN           19

// ******************************************************************
// Z Probe (when not Z_MIN_PIN uncomment below and choose a free pin)
// ******************************************************************
//#ifndef Z_MIN_PROBE_PIN
//  #define Z_MIN_PROBE_PIN  32
//#endif

//*******************************
// Steppers
//*******************************
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#ifndef X_CS_PIN
  #define X_CS_PIN         42
#endif

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#ifndef Y_CS_PIN
  #define Y_CS_PIN         43
#endif

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#ifndef Z_CS_PIN
  #define Z_CS_PIN         40
#endif

#define E0_STEP_PIN        36
#define E0_DIR_PIN         34
#define E0_ENABLE_PIN      30
#ifndef E0_CS_PIN
  #define E0_CS_PIN        41
#endif

#define E1_STEP_PIN        26
#define E1_DIR_PIN         28
#define E1_ENABLE_PIN      24
#ifndef E1_CS_PIN
  #define E1_CS_PIN        37
#endif

/*******************************
 * Default pins for TMC software SPI
 *******************************/
#if ENABLED(TMC_USE_SW_SPI)
  #ifndef TMC_SW_MOSI
    #define TMC_SW_MOSI    66
  #endif
  #ifndef TMC_SW_MISO
    #define TMC_SW_MISO    44
  #endif
  #ifndef TMC_SW_SCK
    #define TMC_SW_SCK     64
  #endif
#endif

#if HAS_DRIVER(TMC2208)
  /**
   * TMC2208 stepper drivers
   *
   * Hardware serial communication ports.
   * If undefined software serial is used according to the pins below
   */
  //#define X_HARDWARE_SERIAL  Serial1
  //#define X2_HARDWARE_SERIAL Serial1
  //#define Y_HARDWARE_SERIAL  Serial1
  //#define Y2_HARDWARE_SERIAL Serial1
  //#define Z_HARDWARE_SERIAL  Serial1
  //#define Z2_HARDWARE_SERIAL Serial1
  //#define E0_HARDWARE_SERIAL Serial1
  //#define E1_HARDWARE_SERIAL Serial1
  //#define E2_HARDWARE_SERIAL Serial1
  //#define E3_HARDWARE_SERIAL Serial1
  //#define E4_HARDWARE_SERIAL Serial1

/************************************
   * Software serial
   **********************************/
  #define X_SERIAL_TX_PIN    40
  #define X_SERIAL_RX_PIN    63
  #define X2_SERIAL_TX_PIN   -1
  #define X2_SERIAL_RX_PIN   -1

  #define Y_SERIAL_TX_PIN    59
  #define Y_SERIAL_RX_PIN    64
  #define Y2_SERIAL_TX_PIN   -1
  #define Y2_SERIAL_RX_PIN   -1

  #define Z_SERIAL_TX_PIN    42
  #define Z_SERIAL_RX_PIN    65
  #define Z2_SERIAL_TX_PIN   -1
  #define Z2_SERIAL_RX_PIN   -1

  #define E0_SERIAL_TX_PIN   44
  #define E0_SERIAL_RX_PIN   66
  #define E1_SERIAL_TX_PIN   -1
  #define E1_SERIAL_RX_PIN   -1
  #define E2_SERIAL_TX_PIN   -1
  #define E2_SERIAL_RX_PIN   -1
  #define E3_SERIAL_TX_PIN   -1
  #define E3_SERIAL_RX_PIN   -1
  #define E4_SERIAL_TX_PIN   -1
  #define E4_SERIAL_RX_PIN   -1
#endif

//*******************************
// Temperature Sensors
//*******************************
#define TEMP_0_PIN           13   // Analog Input
#define TEMP_1_PIN           15   // Analog Input
#define TEMP_BED_PIN         14   // Analog Input

//*******************************
// SPI for Max6675 or Max31855 Thermocouple
//*******************************
#if DISABLED(SDSUPPORT)
  #define MAX6675_SS         66   // Do not use pin 53 if there is even the remote possibility of using Display/SD card
#else
  #define MAX6675_SS         66   // Do not use pin 49 as this is tied to the switch inside the SD card socket to detect if there is an SD card present
#endif

//*******************************
// Heaters / Fans
//*******************************
#define HEATER_0_PIN         10
#define HEATER_1_PIN         9
#define HEATER_BED_PIN       8
#define FAN_PIN              45

//******************************
// Misc Functions
//******************************
#define SDPOWER              -1
#define SDSS                 53
#define LED_PIN              13
#define BEEPER_PIN           -1
#define KILL_PIN             41

#ifndef FILWIDTH_PIN
  #define FILWIDTH_PIN       5   
#endif

#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN     11
#endif

#ifndef PS_ON_PIN
  #define PS_ON_PIN          12
#endif

//****************Custom Zeepro Functions******************//

//*****************************
//Filament Runout Sensors
//*****************************
#define PRIVATE_ENDSTOPS1    11
#define PRIVATE_ENDSTOPS2    6

//*****************************
//Leds
//*****************************
#define LED_blue             23
#define LED_Rampes_gauche    27
#define LED_Rampes_droite    25

#define Commande_Green	     42
#define SUICIDE_Zim_PIN	     43
#define ATMEL_IN_PUSH	       3

#define Endstop_voyage       31
#define Endstop_Z_Movement   32
#define Endstop_Carre        33


//*****************Custom Zeepro Functions End***************//



