// This borrows code from Examples->EEPROM->eeprom_write

int endAddr;

void state2Setup() {
  digitalWrite(ledPin, LOW);
}

void state2Loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  if(digitalRead(startButton)) {
    state = 0;
  }
}

void doState2() {
  if (lastState != 2) state2Setup();
  state2Loop();
}
