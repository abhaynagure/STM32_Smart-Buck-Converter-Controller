#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

#define TFT_CS   D10
#define TFT_DC   D9
#define TFT_RST  D8

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.begin();
  tft.setRotation(1);

  tft.fillScreen(ILI9341_BLACK);

  tft.setTextColor(ILI9341_GREEN);
  tft.setTextSize(2);
  tft.setCursor(20, 30);
  tft.println("Smart Buck");

  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);
  tft.setCursor(20, 70);
  tft.println("STM32 OK");

  tft.setCursor(20, 110);
  tft.println("PWM Ready");
}

void loop() {
}