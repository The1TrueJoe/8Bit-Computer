#include <SD.h>
#include <SPI.h>

#define PWR 2
#define ACT 3



void setup() {
  // Enable Serial
  Serial.begin(57600);

  // Enable Pins
  pinMode(PWR, OUTPUT);
  pinMode(ACT, OUTPUT);

  // Set Power Light
  digitalWrite(PWR, HIGH);
  digitalWrite(ACT, LOW);

  // File
  File eeprom_program;

  // Initialize SD
  Serial.print("Initializing SD Card....");
  if (!SD.begin(10)) { Serial.print("Initialization Failed"); while(1); }
  Serial.print("Initialization Successful");

  // Open File
  eeprom_program = SD.open("rom.txt");
  if (!myfile) { Serial.print("Failed to load rom.txt"); while(1); }

  while (1) {
    if (Serial.readString().compareTo("Waiting for file") == 0) {
      while (eeprom_program.available()) {
        digitalWrite(ACT, HIGH);
        String line = eeprom_program.read();



        digitalWrite(ACT, LOW);
      }

      Serial.print("Done");
    }
  }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
