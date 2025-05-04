# IOT-security-system

## Project Overview
This project implements a domestic security system based on Internet of Things (IoT) aimed at providing monitoring and detecting intrusion in real time for residential assets. The system uses motion sensors (PIR), a microcontroller with Internet connection and web or mobile warning mechanism. Whenever illegal movement is detected, the system will activate the warning by sending notifications via cloud services or applications like BlyNK or IFTTT.
The goal is to provide an affordable safety solution, in real time and at the distance that can be managed for smart houses.

## Components & Applications Used 
🔧 Hardware Components
NodeMCU (ESP8266) or ESP32 microcontroller

PIR Motion Sensor

Buzzer or Alarm

LED (for simulation/testing)

Jumper wires and breadboard

Optional: Camera module (ESP32-CAM for visual surveillance)

📱 Software & Apps
Arduino IDE (for code development and flashing firmware)

Blynk App / Telegram Bot / IFTTT (for push notifications)

Firebase (optional for storing logs)

MQTT broker (like Mosquitto) [optional]

Web dashboard or custom mobile app (optional for interface)

## Libraries Used for Compiling the Code 
In the Arduino IDE, the following libraries are used:

ESP8266WiFi.h or WiFi.h (for network connectivity)

BlynkSimpleEsp8266.h or similar (for mobile app integration)

ESP8266WebServer.h (if local web interface is used)

UniversalTelegramBot.h (for Telegram notifications)

Adafruit_Sensor.h and related libraries (if using sensors beyond PIR)

FirebaseESP8266.h (optional, for cloud logging)

To install:

Go to Arduino IDE → Sketch → Include Library → Manage Libraries

Search and install the relevant libraries

## Project Outcome

Real-time detection of motion in the premises

Remote alerts via mobile apps or cloud notifications

Local alarm/buzzer activation on detection

Scalable architecture (additional sensors or camera support)

Web or mobile dashboard for real-time status

Cost-effective and easy-to-deploy prototype for home security 

## Conclusion 

Domestic security system based on IoT turned out to be an effective approach to ensure safety in smart houses. It combines wireless connectivity, detected based on sensor and built -in cloud / cloud to provide a safe and reaction solution. The system can be expanded more to include facial recognition, door lock control and camera streaming, which is suitable for applications in the real world in the population and commercial environment.

## circuit diagram and simulation 
![Screenshot 2025-05-04 171245](https://github.com/user-attachments/assets/19e217ac-10e1-4f59-83df-5cb01e28d10d)





