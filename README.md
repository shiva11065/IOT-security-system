# IoT Security System

A low-cost home intrusion detection system. A PIR sensor detects motion, triggers a local alarm and sends a remote alert to the user's phone.

## Features
- Motion detection with PIR sensor
- Local buzzer and LED alarm
- Remote alert via [Blynk / Telegram / IFTTT]
- Runs on Wi-Fi with an [ESP8266 NodeMCU / ESP32]

## Hardware
- [ESP8266 NodeMCU / ESP32]
- PIR motion sensor
- Buzzer, LED
- Breadboard, jumper wires, USB power

## Software
- Arduino IDE (C/C++)
- Libraries: WiFi, [Blynk / UniversalTelegramBot]

## How It Works
1. The PIR sensor monitors the area.
2. On motion, the microcontroller turns on the buzzer and LED.
3. It sends a notification through [Blynk / Telegram / IFTTT].

## Setup
1. Wire the circuit as shown below.
2. Install the libraries via Sketch → Include Library → Manage Libraries.
3. Add your Wi-Fi name and API token in the code.
4. Upload to the board and test by moving in front of the sensor.

## Results
Motion was detected in real time, the local alarm triggered, and a remote notification was sent to the phone.


## Future Improvements
- ESP32-CAM for image capture
- Event logging to the cloud
- Door lock control

## circuit diagram and simulation 
![Screenshot 2025-05-04 171245](https://github.com/user-attachments/assets/19e217ac-10e1-4f59-83df-5cb01e28d10d)





