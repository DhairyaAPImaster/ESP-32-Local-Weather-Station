# ESP-32-Local-Weather-Station

## What it is->

An ESP 32 Project that uses a DHT11 temperature and humidity sensor module to find the temperature and humidity sensor of its surroundings.



## DEMO VID!! --->

[Demo Video on youtube](https://youtube.com/shorts/xmrYK5b6QOQ?feature=share)

(Or)

[Demo Video in browser](https://github.com/user-attachments/assets/822c322d-b65e-434a-b876-691a4b4162e7)


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

<img width="481" height="308" alt="circuit diagram" src="https://github.com/user-attachments/assets/499954ff-c8d9-41a7-b9b7-e386e7703745" />




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
<img width="958" height="436" alt="Screenshot 2026-10-04 190002" src="https://github.com/user-attachments/assets/ac1cade1-7cbb-4133-9aa1-30403193fc2c" />
<img width="481" height="308" alt="circuit diagram" src="https://github.com/user-attachments/assets/91cabbea-e095-4561-a8a8-341346fb8ab5" />




## REAL LIFE PROJECT!!! ---> 


<img width="720" height="1280" alt="WhatsApp Image 2026-10-04 at 6 23 40 PM" src="https://github.com/user-attachments/assets/902cf0ef-e17a-4890-bcdf-062ac0c0e947" />
<img width="720" height="1280" alt="WhatsApp Image 2026-10-04 at 6 23 39 PM" src="https://github.com/user-attachments/assets/483162df-1fcd-4541-872f-d286cdbe821e" />
<img width="959" height="470" alt="Screenshot 2026-10-04 171844" src="https://github.com/user-attachments/assets/fcc24f2b-e638-422d-bad4-67bd1743dd14" />
<img width="707" height="399" alt="Screenshot 2026-10-04 171811" src="https://github.com/user-attachments/assets/27d1f93d-c44c-4df7-9095-38feeab2d694" />
<img width="959" height="503" alt="Screenshot 2026-10-04 164722" src="https://github.com/user-attachments/assets/b0ba5164-1956-45cc-98c7-06812d7e3e2c" />
<img width="509" height="318" alt="Screenshot 2026-10-04 164643" src="https://github.com/user-attachments/assets/d8bc1334-a093-4d3b-9654-1ff74eada5c4" />
<img width="458" height="260" alt="Screenshot 2026-10-04 164418" src="https://github.com/user-attachments/assets/dd9e3a79-6e93-4751-beb2-64e398fdb4ea" />
<img width="959" height="174" alt="Screenshot 2026-10-04 164308" src="https://github.com/user-attachments/assets/f478f31a-20ef-4fa6-9207-33f4f644ba11" />
<img width="720" height="1280" alt="WhatsApp Image 2026-10-04 at 6 23 41 PM" src="https://github.com/user-attachments/assets/a8d83258-ceb6-4996-b831-5c3d5878b399" />



