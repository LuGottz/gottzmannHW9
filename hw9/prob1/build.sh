#!/bin/bash
echo "Building the AnalogIn object"
g++ -c AnalogIn.cpp -o AnalogIn.o
echo "Building the read_resistance object"
g++ -c read_resistance.cpp -o read_resistance.o
echo "Linking the AnalogIn.o and read_resistance.o objects to read_resistance"
g++ AnalogIn.o read_resistance.o -o read_resistance
echo "Finished"