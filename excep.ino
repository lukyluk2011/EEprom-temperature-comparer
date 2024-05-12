#include <Wire.h>
#include <AM2320.h>
#include <EEPROM.h>

AM2320 sensor;
int address_t = 1;
int address_h = 2;

void setup() {
  Serial.begin(9600);
  Wire.begin();
}

void EEprom(t1, h1, z_t, z_h, address_t, address_h) {
try {
  t2 = EEPROM.read(address_t);
  h2 = EEPROM.read(address_h);
  EEPROM.update(address_t, t1);
  EEPROM.update(address_h, h1);
  if (max(t1, t2) - min(t1, t2) < z_t) {
    a = False;
  } else {
    a = True;
  }
  if (max(t1, t2) - min(t1, t2) < z_t) {
    return False, a;
  } else {
    return True, a;
  }
catch(Exception e) {
  EEPROM.write(address_t, t1);
  EEPROM.write(address_h, h1);
  return True;
  }
}

void loop() {
  float temperature, humidity;

  if(sensor.readTemperatureAndHumidity(temperature, humidity) == true) {
    past_t, past_h = EEprom(temperature, humidity, 5, 5, address_t, temperature_h);
    if (past_t) {
      Serial.print(temperature)
      Serial.println("°C.")
    } if (past_h) {
      Serial.print(humidyty)
      Serial.println("%.")
    }
  } else {
    Serial.println("Nepodařilo se přečíst data z čidla AM2320");
  }

  delay(2000); // Přečtení dat každých 2 sekundy
}
