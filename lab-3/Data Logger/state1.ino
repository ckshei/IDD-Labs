// This borrows code from Examples->EEPROM->eeprom_read



void state1Setup() {
        Serial.println("Clearing EEPROM");
        EEPROM.write(0, 0);
        Serial.println("EEPROM Cleared");
}

void state1Loop() {
  unsigned long currentMillis = millis();

  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    if(pressureReading > 1000) {
      if (currentMillis - previousMillis >= 1000) {
          counter = counter + 1;
          previousMillis = currentMillis;
          Serial.println(counter);
      }
    } else {
        Serial.println("Writing to EEPROM");
        EEPROM.write(0, counter);
        Serial.println("committed to EEPROM!");
        state = 2;
    }
}

void doState1() {
  if (lastState != 1) { state1Setup(); }
  state1Loop();
}
