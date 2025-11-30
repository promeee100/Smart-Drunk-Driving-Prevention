#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); 
int buzzer = 2;
int alcohol = 3;
int engine = 4;

void setup()
{

pinMode(buzzer,OUTPUT);
pinMode(alcohol,INPUT);
pinMode(engine,OUTPUT);


  
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("SMART DRUNK");
  lcd.setCursor(0, 1);
  lcd.print("DRIVING PREVENTION");
   delay(2000);
  digitalWrite(buzzer,HIGH);
  digitalWrite(engine,LOW);
  delay(500);
  digitalWrite(buzzer,LOW);
  delay(500);
  lcd.clear();
}
void loop()
{   
  if(digitalRead(alcohol)==LOW){  
    lcd.setCursor(0, 0);
    lcd.print("ALCOHOL DETECTED");
    lcd.setCursor(2, 1);
    lcd.print("ENGINE OFF");
    digitalWrite(engine,LOW);
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500);
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500);
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500);
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500);
     lcd.clear();
  }
      else {
      lcd.setCursor(3, 0);
      lcd.print("NO ALCOHOL");
      lcd.setCursor(2, 1);
      lcd.print("ENGINE  ON");  
      digitalWrite(engine,HIGH);

}
}
