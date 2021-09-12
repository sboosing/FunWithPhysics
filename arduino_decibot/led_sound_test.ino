

//const int ledPin = 13;      // the PWM pin of the LED

#define pinCount 1
const int ledPins[] = {13};
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7,8,9,10,11,12);
 
void setup()
{
  //pinMode(13, OUTPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0, 0);
  lcd.print("Module 1:");
  lcd.setCursor(0, 1);
  lcd.print("Intensity!");
  Serial.begin(9600);
  //for(int x = 0; x < pinCount; x++)
  //pinMode(ledPins[x], OUTPUT);
}


void loop() 
{
  byte brightness = analogRead(A0)/5 ; // analogRead goes from 0..1023 so /4 => 0..2
  
  //for (int x = 0; x < pinCount; x++){ 
    //analogWrite(ledPins[x], brightness);
 // }
 
  for (int x = pinCount-1; x>=0; x--) {
  //lcd.setCursor(0, 0);
  //lcd.print("Play loud to");
  //lcd.setCursor(0, 1);
  //lcd.print("Get Brighter!");
  //delay(2000);
  //lcd.setCursor(0, 0);
  //lcd.print("Press Start to");
  //lcd.setCursor(0, 1);
  //lcd.print("Begin");
  //delay(2000); */
  //int x = pinCount;
    analogWrite(ledPins[x], brightness);
 
 }
}
