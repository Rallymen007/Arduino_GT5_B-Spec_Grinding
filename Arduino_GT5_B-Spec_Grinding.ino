#include "Keyboard.h"

const int buttonPin = 4;
const int ledPin = 13;
int pressed = 0;

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  if(digitalRead(buttonPin) == 1){ 
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  
    // X (selecting race)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 1 second
    delay(1000); 
    // X (selecting driver)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 1 second
    delay(1000); 
    // X (loading)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 40 seconds
    delay(40000); 
    // X (loaded, start race)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    digitalWrite(ledPin, HIGH);
    // 5 minutes
    delay(305000); 
    digitalWrite(ledPin, LOW);
    // X (race completed)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 10 seconds
    delay(10000); 
    // X (Cr)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 10 seconds
    delay(10000); 
    // X (XP)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 5 seconds
    delay(5000); 
    // esc (cursor on exit) 
    Keyboard.press(KEY_ESC);
    digitalWrite(ledPin, HIGH);
    delay(10);
    Keyboard.release(KEY_ESC);
    // 5 seconds
    delay(5000); 
    // X (exit driver)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 10 seconds
    delay(10000); 
    // Esc (cursor on exit race)
    Keyboard.press(KEY_ESC);
    digitalWrite(ledPin, LOW);
    delay(10);
    Keyboard.release(KEY_ESC);
    // 5 seconds
    delay(5000); 
    // X (exit race)
    Keyboard.press(KEY_RETURN);
    delay(10);
    Keyboard.release(KEY_RETURN);
    // 40 seconds?
    delay(40000); 
    // Return to start (menu loaded)
  
  
  
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}
