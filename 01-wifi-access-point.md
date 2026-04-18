# 01. Wi-Fi Access Point

This ESP32 project creates its own Wi-Fi network.

## Goal
Learn how ESP32 can work as a Wi-Fi Access Point and allow a phone or laptop to connect directly to it.

## What I practiced
- ESP32 board setup
- Wi-Fi Access Point mode
- connecting a phone to the ESP32 network
- testing local wireless communication without internet

## Process
1. Opened Arduino IDE in Linux Mint.
2. Selected the correct ESP32 board and port.
3. Uploaded the Wi-Fi Access Point sketch to the ESP32.
4. Waited for the board to start its own wireless network.
5. Checked available Wi-Fi networks on the phone.
6. Connected the phone to the ESP32 network.
7. Confirmed that the ESP32 was reachable locally even though the network had no internet.

## Result
The ESP32 successfully created its own Wi-Fi network, and the phone was able to detect and connect to it.

## Files
- [01-wifi-access-point.md](./01-wifi-access-point.md)
- [01-wifi-access-point.ino](./01-wifi-access-point.ino)

## Code
The Arduino sketch for this step is stored in [01-wifi-access-point.ino](./01-wifi-access-point.ino).

## Notes
This is the first ESP32 Wi-Fi step before moving to a web server project.
