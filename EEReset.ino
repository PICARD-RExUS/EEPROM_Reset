#include <EEPROM.h>

int addr = 0;
byte x;

void setup() {

    Serial.begin(9600);
  while (!Serial) {
    ;  } }

void loop() {

  x = EEPROM.read(addr);
//Serial.println(addr);
Serial.println(x);
x = 0;
EEPROM.write(0,x);
delay(1000); }
