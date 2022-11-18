#include <LiquidCrystal_I2C.h>

#include <Wire.h> 
LiquidCrystal_I2C lcd(0x3F,16,2); 

void setup()
{
  lcd.init();                    
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("HUONG DAN DO AN ");
  lcd.setCursor(0,1);
  lcd.print("HUYNH NHAT TUNG ");
}

void loop()
{
}
