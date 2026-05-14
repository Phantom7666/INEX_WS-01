#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include "Adafruit_SHT31.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
Adafruit_SHT31 sht31 = Adafruit_SHT31();

#define LDR_PIN 34
#define MQ135_PIN 35

void setup() {
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("OLED gagal"));
    for (;;);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);

  if (!sht31.begin(0x44)) {
    Serial.println("Sensor SHT31 tidak ditemukan");
    while (1) delay(1);
  }

  delay(1000);
}

void loop() {
  float suhu = sht31.readTemperature();
  float kelembaban = sht31.readHumidity();

  int ldrValue = analogRead(LDR_PIN);
  int mq135Value = analogRead(MQ135_PIN);

  Serial.print("Temperatur: ");
  Serial.print(suhu);
  Serial.print(" C, ");

  Serial.print("Kelembaban: ");
  Serial.print(kelembaban);
  Serial.print(" %, ");

  Serial.print("Cahaya (LDR): ");
  Serial.print(ldrValue);
  Serial.print(", ");

  Serial.print("Gas (MQ-135): ");
  Serial.println(mq135Value);

  display.clearDisplay();
  display.setCursor(0, 0);

  display.println("Sensor Monitoring");
  display.println("-----------------");

  display.print("Suhu: ");
  display.print(suhu);
  display.println(" C");

  display.print("Hum: ");
  display.print(kelembaban);
  display.println(" %");

  display.print("LDR: ");
  display.println(ldrValue);

  display.print("Gas: ");
  display.println(mq135Value);

  display.display();

  delay(2000);
}
