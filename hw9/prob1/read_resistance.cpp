/** File name: read_resistance.cpp
*   Class for Ohmmeter on the BB
*   Written by Luke Gottzmann for CPE 422
*/

/** Analog Converter Application
*   Demonstrates the usage of the analog-to-digital converter on BeagleBone Black.
*
*   Command Line Arguments:	None
*   Example Invocation:		./read_resistance
*/

#include "AnalogIn.h"
#include <iostream>

int main() {
	 // Instantiate AnalogIn object with number 0
	 AnalogIn analogInput(0);
	    
	 // Call getNumber() and print the result
	 unsigned int num = analogInput.getNumber();
	 std::cout << "Analog Input Number: " << num << std::endl;
	    
	 // Call readAdcSample() and print the result
	 int adcValue = analogInput.readAdcSample();
	 std::cout << "ADC Sample Value: " << adcValue << std::endl;
	    
	 return 0;
}