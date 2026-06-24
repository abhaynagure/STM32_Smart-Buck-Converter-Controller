#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

#define TFT_CS   D10
#define TFT_DC   D9
#define TFT_RST  D8

#define BTN_3V3 D2
#define BTN_5V  D3
#define BTN_9V  D4

#define LED_R D6
#define LED_G D7
#define LED_B A0

Adafruit_ILI9341 tft(TFT_CS, TFT_DC, TFT_RST);

int currentMode = 1;

void setLedColor(int r, int g, int b) {
  analogWrite(LED_R, r);
  analogWrite(LED_G, g);
  analogWrite(LED_B, b);
}

void showMode(int mode) {
  tft.fillScreen(ILI9341_BLACK);

  tft.setTextSize(2);
  tft.setTextColor(ILI9341_GREEN);
  tft.setCursor(20, 20);
  tft.print("Smart Buck");

  tft.setTextColor(ILI9341_WHITE);
  tft.setCursor(20, 65);

  if (mode == 0) {
    tft.print("Mode: 3.3V");
    tft.setCursor(20, 100);
    tft.print("PWM: 28%");
    setLedColor(0, 0, 255);  
  } 
  else if (mode == 1) {
    tft.print("Mode: 5V");
    tft.setCursor(20, 100);
    tft.print("PWM: 42%");
    setLedColor(0, 255, 0);   
  } 
  else {
    tft.print("Mode: 9V");
    tft.setCursor(20, 100);
    tft.print("PWM: 75%");
    setLedColor(255, 0, 0); 
  }

  tft.setTextColor(ILI9341_CYAN);
  tft.setCursor(20, 140);
  tft.print("PWM Gate Signal");
}

void setup() {
  pinMode(BTN_3V3, INPUT_PULLUP);
  pinMode(BTN_5V, INPUT_PULLUP);
  pinMode(BTN_9V, INPUT_PULLUP);

  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  tft.begin();
  tft.setRotation(1);

  showMode(currentMode);
}

void loop() {
  if (digitalRead(BTN_3V3) == LOW) {
    currentMode = 0;
    showMode(currentMode);
    while (digitalRead(BTN_3V3) == LOW);
    delay(100);
  }

  if (digitalRead(BTN_5V) == LOW) {
    currentMode = 1;
    showMode(currentMode);
    while (digitalRead(BTN_5V) == LOW);
    delay(100);
  }

  if (digitalRead(BTN_9V) == LOW) {
    currentMode = 2;
    showMode(currentMode);
    while (digitalRead(BTN_9V) == LOW);
    delay(100);
  }
}