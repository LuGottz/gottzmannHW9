/** File name: AnalogIn.h
*   Class for Analog to Digital Converter on the BB
*   Written by Luke Gottzmann for CPE 422
*/

#ifndef ANALOGIN_H
#define ANALOGIN_H

class AnalogIn {
	private:
		unsigned int number;

	public:
		AnalogIn();
		AnalogIn(unsigned int n);
		virtual unsigned int getNumber() { return number; } // inline function implementation.
		virtual void setNumber(unsigned int n);
		virtual int readAdcSample();
		virtual ~AnalogIn();
};

#endif