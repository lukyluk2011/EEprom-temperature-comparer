void EEprom(y, z, address) {
try {
x = EEPROM.read(address);
EEPROM.update(address, y);
if (max(x, y) - min(x, y) < z) {
return False;
} else {
return True;
} catch(Exception e) {

}
EEPROM.write(address, y);
return True;
}
