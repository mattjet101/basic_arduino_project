#include "Arduino.h"
#include "MorseLibrary.h"

//Initialize built-in LED
MorseLibrary::MorseLibrary(){
  pinMode(LED_BUILTIN, OUTPUT);
}

void MorseLibrary::longBlink(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a 0.5 seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                        // wait for a 0.5 seconds
}

void MorseLibrary::shortBlink(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

// Input to Morse Code
void MorseLibrary::blinkChar(char inputChar) {
  Serial.print(inputChar);
  if (inputChar == 'A' ||inputChar == 'a') {
    shortBlink();
    longBlink();
  }
  else if (inputChar == 'B' ||inputChar == 'b') {
    longBlink();
    shortBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == 'C' ||inputChar == 'c') {
    longBlink();
    shortBlink();
    longBlink();
    shortBlink();
  }
   else if (inputChar == 'D' ||inputChar == 'd') {
    longBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == 'E' ||inputChar == 'e') {
    shortBlink();
  }
   else if (inputChar == 'F' ||inputChar == 'f') {
    shortBlink();
    shortBlink();
    longBlink();
    shortBlink();
  }
   else if (inputChar == 'G' ||inputChar == 'g') {
    longBlink();
    longBlink();
    shortBlink();
  }
   else if (inputChar == 'H' ||inputChar == 'h') {
    shortBlink();
    shortBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == 'I' ||inputChar == 'i') {
    shortBlink();
    shortBlink();
  }
   else if (inputChar == 'J' ||inputChar == 'j') {
    shortBlink();
    longBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == 'K' ||inputChar == 'k') {
    longBlink();
    shortBlink();
    longBlink();
  }
   else if (inputChar == 'L' ||inputChar == 'l') {
    shortBlink();
    longBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == 'M' ||inputChar == 'm') {
    longBlink();
    longBlink();
  }
   else if (inputChar == 'N' ||inputChar == 'n') {
    longBlink();
    shortBlink();
  }
   else if (inputChar == 'O' ||inputChar == 'o') {
    longBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == 'P' ||inputChar == 'p') {
    shortBlink();
    longBlink();
    longBlink();
    shortBlink();
  }
   else if (inputChar == 'Q' ||inputChar == 'q') {
    longBlink();
    longBlink();
    shortBlink();
    longBlink();
  }
   else if (inputChar == 'R' ||inputChar == 'r') {
    shortBlink();
    longBlink();
    shortBlink();
  }
   else if (inputChar == 'S' ||inputChar == 's') {
    shortBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == 'T' ||inputChar == 't') {
    longBlink();
  }
   else if (inputChar == 'U' ||inputChar == 'u') {
    shortBlink();
    shortBlink();
    longBlink();
  }
   else if (inputChar == 'V' ||inputChar == 'v') {
    shortBlink();
    shortBlink();
    shortBlink();
    longBlink();
  }
   else if (inputChar == 'W' ||inputChar == 'w') {
    shortBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == 'X' ||inputChar == 'x') {
    longBlink();
    shortBlink();
    shortBlink();
    longBlink();
  }
   else if (inputChar == 'Y' ||inputChar == 'y') {
    longBlink();
    shortBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == 'Z' ||inputChar == 'z') {
    longBlink();
    longBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == '0') {
    longBlink();
    longBlink();
    longBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == '1') {
    shortBlink();
    longBlink();
    longBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == '2') {
    shortBlink();
    shortBlink();
    longBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == '3') {
    shortBlink();
    shortBlink();
    shortBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == '4') {
    shortBlink();
    shortBlink();
    shortBlink();
    shortBlink();
    longBlink();
  }
   else if (inputChar == '5') {
    shortBlink();
    shortBlink();
    shortBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == '6') {
    longBlink();
    shortBlink();
    shortBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == '7') {
    longBlink();
    longBlink();
    shortBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == '8') {
    longBlink();
    longBlink();
    longBlink();
    shortBlink();
    shortBlink();
  }
   else if (inputChar == '9') {
    longBlink();
    longBlink();
    longBlink();
    longBlink();
    shortBlink();
  }
    else if (inputChar == '.') {
    shortBlink();
    longBlink();
    shortBlink();
    longBlink();
    shortBlink();
    longBlink();
  }
    else if (inputChar == ',') {
    longBlink();
    longBlink();
    shortBlink();
    shortBlink();
    longBlink();
    longBlink();
  }
   else if (inputChar == '?') {
    shortBlink();
    shortBlink();
    longBlink();
    longBlink();
    shortBlink();
    shortBlink();
  }
}
