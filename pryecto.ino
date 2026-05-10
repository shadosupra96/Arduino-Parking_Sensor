#include <LiquidCrystal.h> //librería
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //pines de la placa

void setup() {
lcd.begin(16, 2);
}

void loop() {
lcd.print("Pantalla num");
delay(2000);
lcd.setCursor(0, 1);
lcd.print("UNO");
delay(2000);
lcd.clear(); 
}



