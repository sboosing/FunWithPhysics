//www.elegoo.com
//2016.12.9

/*
  LiquidCrystal Library - Hello World
 Demonstrates the use of a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 This sketch prints "Hello World!" to the LCD
 and shows the time elapsed.
  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 Library originally added 18 Apr 2008
 by David A. Mellis
 Library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 Example added 9 Jul 2009
 by Tom Igoe
 Modified 22 Nov 2010
 by Tom Igoe
 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>
#include <Wire.h>

// initialize
LiquidCrystal lcd(7,8,9,10,11,12);
const int buttonPin1 = 2;
const int buttonPin2 = 4;

int buttonState1 = 0;
int buttonState2 = 0;
const int LED1 = 13;
const int LED2 = 3;

void setup() {   // plays once, then iterates through loop 
  /* // lcd init
    // set up the LCD's number of columns and rows:
        lcd.begin(16, 2);
        lcd.clear
  // Print a message to the LCD.
        lcd.print("     ");  // blank screen */
  // button init
         pinMode(buttonPin1, INPUT); // home/start
         pinMode(buttonPin2, INPUT);
         pinMode(LED1, OUTPUT);
         pinMode(LED2, OUTPUT);
}

void loop() {
  //delay(2000);
  // set the cursor to column 0, line 1
  /* // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  lcd.print("Welcome       ");
  lcd.setCursor(0, 1);
  lcd.print("         ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Press Start to");
  lcd.setCursor(0, 1);
  lcd.print("Begin");
  //delay(2000); */
  
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
    if (buttonState1 == HIGH)
 {
        //if button is pressed then turn the led on
        digitalWrite(LED1, HIGH);
        //while(digitalRead(  == pressed), do nothing 
 }
    else{
      digitalWrite(LED1, LOW);
 }
    if (buttonState2 == HIGH)
    {
      digitalWrite(LED2, HIGH);
    }
    else{
      digitalWrite(LED2, LOW);
    }
    
 
}
 
 
 
