// This borrows code from Examples->EEPROM->eeprom_clear

int count;

void state0Setup() {
  digitalWrite(ledPin, LOW);
}

void state0Loop() {
  unsigned long currentMillis = millis();
  if(pressureReading > 1000) {
    count = count + 1;
  } else {
    count = 0;
  }
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  if(pressureReading > 1000 && count > 15) {
    state = 1; 
    count = 0;
  }
  if(digitalRead(startButton)) {
    Serial.println("Reading from EEPROM");
    value = EEPROM.read(0);
    Serial.print(value);
    Serial.println();
    Serial.println("Done reading from EEPROM");
  }
}

void doState0() {
  if (lastState != 0) { state0Setup(); }
  state0Loop();
}
