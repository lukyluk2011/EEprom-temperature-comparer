void EEprom(t1, h1, z_t, z_h, address_t, address_h) {
try {
  t2 = EEPROM.read(address_t);
  h2 = EEPROM.read(address_h)
  EEPROM.update(address_t, t1);
  EEPROM.update(address_h, h1)
  if (max(t1, t2) - min(t1, t2) < z_t) {
    a = False  
  } else {
    a = True
  }
  if (max(t1, t2) - min(t1, t2) < z_t) {
    return False;
  } else {
    return True;
  }
catch(Exception e) {
  EEPROM.write(address_t, t1);
  EEPROM.write(address_h, h1)
  return True;
  }
}
