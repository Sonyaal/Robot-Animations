# Bottango Animations – RL Rocket Robot
This project controls a physical rocket robot using Bottango animations, Arduino-based servo control, and browser-based control via ESP32.

## Overview

Bottango is used to map joints to servos and generate animation code. An ESP32 executes the motion and enables wireless control through a browser.

## Structure

* `BottangoArduinoDriver/` – Arduino control code
* `AdvancedFeatures/` – extended functionality
* `BottangoArduinoDriver.ino` – main sketch

## Run

1. Open `BottangoArduinoDriver.ino` in the Arduino IDE
2. Upload to your board
3. Power the servos
4. Connect via ESP32 and run animations

## WiFi Setup (ESP32)

Create a file `wifi_config.h` in BottangoArduinoDriver/ with your credentials:

```cpp
#pragma once
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
```

Place it either:

* In `BottangoArduinoDriver/` and use `#include "wifi_config.h"` (recommended), or
* In the root folder and use `#include "../wifi_config.h"`

Add to `.gitignore`:

```
wifi_config.h
```

## Demo
<img width="3024" height="1784" alt="bottango_demo" src="https://github.com/user-attachments/assets/e70553d1-65a7-4d38-82e9-01fdd3e783c9" />

