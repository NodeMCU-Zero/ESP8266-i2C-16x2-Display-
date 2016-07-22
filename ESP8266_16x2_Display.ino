/*
NodeMCU Ver.1 i2C 16x2 LCD SCREEN
Tested with original AI NodeMcu (D1--> SDL, D2-->SDA)
LCD 16x2 power supply to be connected to 5V ( Don't connect to 3.3V)
Common Gorund (5V and NodeMcu)
         -------
           ---
            -
*/

#include <Wire.h>  // This library is already built in to the Arduino IDE
#include <LiquidCrystal_I2C.h> //Download :: https://codeload.github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library/zip/master
LiquidCrystal_I2C lcd(0x3F, 20, 4);

void setup()
{
  lcd.begin();   // initializing the LCD
  lcd.backlight(); // Enable or Turn On the backlight 
  lcd.setCursor(0, 0);
  lcd.print("NodeMcu_Test"); // Printing Line
  delay(1000);
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);  
  lcd.print("Working Hehaaa.") ;
  delay(1000);
 }
