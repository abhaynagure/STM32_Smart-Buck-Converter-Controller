#include <LiquidCrystal.h>

// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(A8, A9, A10, A11, A12, A15);

void setup() {
lcd.begin(16, 2);

lcd.setCursor(0, 0);
lcd.print("Smart Buck");

lcd.setCursor(0, 1);
lcd.print("Controller");
}

void loop() {
// Display remains static
}
