# ESP-32-Local-Weather-Station

## What it is->

An ESP 32 Project that uses a DHT11 temperature and humidity sensor module to find the temperature and humidity sensor of its surroundings.



## DEMO VID!! --->

https://youtube.com/shorts/xmrYK5b6QOQ?feature=share


## How It Works

So it works by using a DHT11 module, which for those of u who dont know is a temperature and humidity sensor module, which when connected to an esp32 with the firmware i wrote sends the humidity and temp to the esp32 which then displays it onto the display.

A really amazing part of this project is that i made the esp32 connect to the wifi **(to do that u must give replace the placeholder wifi name and password in the firmware.ino file)** so after it connects to the wifi then it sends a webpage over the local network allowing u to load up http://192.168.0.108/ on your network to see the current temperature and humidity around the device!!! 


# Hardware Setup

This project uses an ESP32 Dev Module, a 0.96" I2C OLED display (SSD1306) and a DHT11 module. I built mine on a breadboard.

## Step 1 - Place everything

First place the ESP32 near the breadboard. Then place the OLED display and the DHT11 module on the breadboard.


## Step 2 - Connect the OLED

Connect the OLED like this.

VCC -> 3.3V row

GND -> GND row

SDA -> GPIO 21 (D21)

SCL -> GPIO 22 (D22)



## Step 3 - Connect the DHT11 module


DATA -> GPIO 4
VCC ->3V3
GND -> GND



## Step 4 - Double check everything

Before powering it on check all the wiring once again. Make sure:

- SDA really goes to GPIO 21.
- SCL really goes to GPIO 22.
- The DHT11 Wiring is correct.
- There are no loose jumper wires.



# Flashing the Firmware

Open the project in Arduino IDE.

Install these libraries if you havent already.

- Adafruit GFX
- Adafruit SSD1306
- DHT sensor library
- Adafruit Unified Sensor

Now select your board.

Tools -> Board -> ESP32 Dev Module

Select the correct COM port then click **Upload**.

Wait for the code to compile and upload. Once its done the ESP32 will restart automaticly.


## Schematic

The circuit diagram can be found in the `circuit diagram.png` file.

Anyways here is a pic ---> 

<img width="961" height="616" alt="image" src="https://github.com/user-attachments/assets/41c277c9-ee45-434f-84e6-2937ce6288f8" />



## Bill of Materials

| Part | Quantity | Link | Price (USD) |
|---|---|---|---|
| Breadboard – Full (MB102, 830pt) | 1 | [Robocraze](https://robocraze.com/products/mb102-830-points-solderless-breadboard) | $0.68 |
| SSD1306 I2C OLED Display (0.96", 4-pin) | 1 | [Robocraze](https://robocraze.com/products/0-96in-oled-display-module-4pin) | $1.70 |
| ESP32 DevBoard (SmartElex, 38-pin) | 1 | [Robu.in](https://robu.in/product/smartelex-esp32-38pin-development-kit-wifibluetooth-ultra-low-power-consumption-dual-core-1-pcs/) | $7.60 |
| DHT11 Module | 1 | [Robocraze](https://robocraze.com/products/dht11-humidity-temperature-sensor-module?variant=40192431685785&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&srsltid=AU7gw4V-bxrk6VzrU1_3o53lAy5qFkbTUJCPatJyR2n2MGuVxuZuK1Aac08) | $0.61 |
| Jumper Wires (F2M, 20cm, pack of 20) | 1 | [Robocraze](https://robocraze.com/products/f2m-jumper-wires-20cm-20pcs) | $0.26 |
| **Total** | | | **$10.59** |

## Firmware

Firmware file **(firmware.ino)** is in the `firmware/` folder.


### IMAGES!!!!



## ONLINE SIMULATION --->

<img width="958" height="436" alt="Screenshot 2026-10-04 190002" src="https://github.com/user-attachments/assets/45b59f0b-5252-416b-bced-7f711630cb7c" />
<img width="961" height="616" alt="image" src="https://github.com/user-attachments/assets/db41070f-751e-4cce-a932-7dda51c402f2" />



## REAL LIFE PROJECT!!! ---> 

<img width="959" height="470" alt="Screenshot 2026-10-04 171844" src="https://github.com/user-attachments/assets/1cafc67d-4ec0-45a6-b959-038205711a81" />
<img width="707" height="399" alt="Screenshot 2026-10-04 171811" src="https://github.com/user-attachments/assets/5a8d73f4-ff57-43b7-aacc-2b26621d12cc" />
<img width="959" height="503" alt="Screenshot 2026-10-04 164722" src="https://github.com/user-attachments/assets/7df7e30e-d2c0-41c8-89c5-8bccfcf9f912" />
<img width="509" height="318" alt="Screenshot 2026-10-04 164643" src="https://github.com/user-attachments/assets/9bc5003e-31ab-4f3b-8c6d-2fb07c3b2c16" />
<img width="458" height="260" alt="Screenshot 2026-10-04 164418" src="https://github.com/user-attachments/assets/769f3e58-ec33-447d-9be6-34ccaf8a4304" />
<img width="959" height="174" alt="Screenshot 2026-10-04 164308" src="https://github.com/user-attachments/assets/5bbdd1a7-bb39-4a85-9dda-360c48c80936" />


https://github.com/user-attachments/assets/4b3876cb-c1c6-48cd-be1d-b9be9bb9df20

<img width="720" height="1280" alt="WhatsApp Image 2026-10-04 at 6 23 41 PM" src="https://github.com/user-attachments/assets/d688ab3e-eba6-42f9-9da4-4bba487e0c9e" />
<img width="720" height="1280" alt="WhatsApp Image 2026-10-04 at 6 23 40 PM" src="https://github.com/user-attachments/assets/3cdab462-2808-42ad-835c-6134cec4ae2c" />
<img width="720" height="1280" alt="WhatsApp Image 2026-10-04 at 6 23 39 PM" src="https://github.com/user-attachments/assets/90da4efa-ee0d-41b5-b9c0-5edb8c8b91fb" />


