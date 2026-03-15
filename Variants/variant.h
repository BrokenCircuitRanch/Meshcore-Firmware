#pragma once

// OLED
#define I2C_SDA 21
#define I2C_SCL 22

// GPS (your map)
#define GPS_RX_PIN 15
#define GPS_TX_PIN 12

// Buttons / power / battery
#define BUTTON_PIN 39
#define SECOND_BUTTON_PIN 0
#define BATTERY_PIN 35
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL
#define ADC_MULTIPLIER 1.85
#define EXT_PWR_DETECT 4

// Status LED
#define LED_PIN 2

// Radio type
#define USE_SX1262
#define SX126X_MAX_POWER 22
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// SX126x pins
#define SX126X_CS 18
#define SX126X_SCK 5
#define SX126X_MOSI 27
#define SX126X_MISO 19
#define SX126X_RESET 23
#define SX126X_BUSY 32
#define SX126X_DIO1 33
#define SX126X_TXEN 13
#define SX126X_RXEN 14

// Compatibility aliases
#define LORA_CS SX126X_CS
#define LORA_SCK SX126X_SCK
#define LORA_MOSI SX126X_MOSI
#define LORA_MISO SX126X_MISO
#define LORA_DIO1 SX126X_DIO1
