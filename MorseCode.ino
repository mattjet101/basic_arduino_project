#include "MorseLibrary.h"
MorseLibrary morse;

//For input
char input;
String stringInput;

void setup() {
  // Initialize Serial Port
  Serial.begin(9600);
  delay(2000); 

  //Initialize built-in LED
  pinMode(LED_BUILTIN, OUTPUT);

  //Prompt
  Serial.print("Input a Word or Phrase: ");
}

void loop() {
  if ( Serial.available() ) {
    input = Serial.read();
    morse.blinkChar(input);
  }
}
