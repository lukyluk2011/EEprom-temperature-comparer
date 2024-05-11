void EEprom(y, z, address) {
x = EEPROM.read(address);
EEPROM.update(address, y);
if (max(x, y) - min(x, y) < z) {
return False;
} else {
return True;
}}
