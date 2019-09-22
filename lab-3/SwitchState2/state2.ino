// This borrows code from Examples->EEPROM->eeprom_write

int endAddr;

void state2Setup() {
  digitalWrite(ledPin, LOW);
  var = analogRead(readPin);
  var = map(var, 0, 1023, 0, 255);
  Serial.println("Writing to EEPROM");
  
  //if any of the pin settings for the different states differed for the different states, you could change those settings here.
  EEPROM.write(0, var);

  Serial.println("String committed to EEPROM!");
}

void state2Loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void doState2() {
  if (lastState != 2) state2Setup();
  state2Loop();
}
