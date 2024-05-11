# EEprom-temperature-comparer
## A function to the arduino that recognizes how similar the old and new temperatures are. It uses EEPROM.
I run the function using 'past = EEprom(temperature, +|-, address to EEprom);' For example 'past = EEprom(20.4, 3, 1);' In the trap I get True if the program thinks the temperature should be different and False if the program thinks the temperatures are similar.This function requires only the EEprom library.We import it using '#include <EEPROM.h>'. 
## libraries
you find all the libraries at https://github.com/arduino/ArduinoCore-avr.git.
