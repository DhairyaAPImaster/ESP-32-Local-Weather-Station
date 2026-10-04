#include <WiFi.h>
#include <WebServer.h>

#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// =========================
// WIFI SETTINGS
// =========================

const char* ssid = "wifi name";
const char* password = "wifi password";

// =========================
// DHT11 SETTINGS
// =========================

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// =========================
// OLED SETTINGS
// =========================

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  OLED_RESET
);

// =========================
// WEB SERVER
// =========================

WebServer server(80);

// =========================
// SENSOR VALUES
// =========================

float temperature = 0;
float humidity = 0;

// =========================
// WEBPAGE
// =========================

void handleRoot() {

  String page = R"rawliteral(
<!DOCTYPE html>

<html>

<head>

<meta name="viewport" content="width=device-width, initial-scale=1">

<title>ESP32 Weather Station</title>

<style>

body {
    margin: 0;
    font-family: Arial, sans-serif;
    background: #101010;
    color: white;
    text-align: center;
}

.container {
    max-width: 500px;
    margin: auto;
    padding: 30px 20px;
}

h1 {
    font-size: 28px;
}

.card {
    background: #1c1c1c;
    border-radius: 20px;
    padding: 25px;
    margin-top: 20px;
}

.value {
    font-size: 40px;
    font-weight: bold;
}

.label {
    color: #aaaaaa;
    font-size: 15px;
    margin-bottom: 10px;
}

.status {
    margin-top: 20px;
    padding: 12px;
    border-radius: 12px;
    background: #292929;
}

</style>

</head>

<body>

<div class="container">

<h1>ESP32 Weather Station</h1>

<div class="card">

<div class="label">TEMPERATURE</div>

<div class="value">
)rawliteral";

  page += String(temperature, 1);
  page += " °C";

  page += R"rawliteral(
</div>

</div>

<div class="card">

<div class="label">HUMIDITY</div>

<div class="value">
)rawliteral";

  page += String(humidity, 1);
  page += " %";

  page += R"rawliteral(
</div>

</div>

<div class="status">

ESP32 Online 🟢

</div>

</div>

</body>

</html>
)rawliteral";

  server.send(200, "text/html", page);
}

// =========================
// SETUP
// =========================

void setup() {

  Serial.begin(115200);

  // Start DHT11
  dht.begin();

  // Start I2C
  Wire.begin(21, 22);

  // Start OLED
  if (!display.begin(
        SSD1306_SWITCHCAPVCC,
        OLED_ADDRESS
      )) {

    Serial.println("OLED not found!");

    while (true);
  }

  // Initial OLED screen

  display.clearDisplay();

  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(2);

  display.setCursor(10, 10);

  display.println("WEATHER");

  display.setCursor(10, 35);

  display.println("STATION");

  display.display();

  delay(2000);

  // =========================
  // CONNECT TO WIFI
  // =========================

  display.clearDisplay();

  display.setTextSize(1);

  display.setCursor(0, 0);

  display.println("Connecting WiFi...");

  display.display();

  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {

    delay(500);

    Serial.print(".");
  }

  Serial.println();

  Serial.println("WiFi connected!");

  Serial.print("ESP32 IP address: ");

  Serial.println(WiFi.localIP());

  // Show IP on OLED

  display.clearDisplay();

  display.setCursor(0, 0);

  display.println("WiFi Connected!");

  display.setCursor(0, 20);

  display.println("IP Address:");

  display.setCursor(0, 35);

  display.println(WiFi.localIP());

  display.display();

  delay(3000);

  // Start web server

  server.on("/", handleRoot);

  server.begin();

  Serial.println("Web server started!");
}

// =========================
// LOOP
// =========================

void loop() {

  server.handleClient();

  // Read DHT11

  float newHumidity = dht.readHumidity();

  float newTemperature = dht.readTemperature();

  // Check if reading failed

  if (isnan(newHumidity) || isnan(newTemperature)) {

    Serial.println("Failed to read DHT11!");

    delay(2000);

    return;
  }

  humidity = newHumidity;

  temperature = newTemperature;

  // =========================
  // SERIAL MONITOR
  // =========================

  Serial.print("Temperature: ");

  Serial.print(temperature);

  Serial.println(" °C");

  Serial.print("Humidity: ");

  Serial.print(humidity);

  Serial.println(" %");

  Serial.println();

  // =========================
  // OLED
  // =========================

  display.clearDisplay();

  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1);

  display.setCursor(0, 0);

  display.println("ESP32 WEATHER");

  display.drawLine(
    0,
    12,
    128,
    12,
    SSD1306_WHITE
  );

  display.setTextSize(2);

  display.setCursor(0, 20);

  display.print("T:");

  display.print(temperature, 1);

  display.println(" C");

  display.setCursor(0, 45);

  display.print("H:");

  display.print(humidity, 1);

  display.println(" %");

  display.display();

  // DHT11 should not be read too rapidly

  delay(2000);
}
