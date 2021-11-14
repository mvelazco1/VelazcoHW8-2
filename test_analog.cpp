// Author Michael Velazco on 11/10/2021.
// This will test the analogIn class.
// by creating object initialized(in the class),
// to zero and grabs the number and reads adc val.
//
//
#include "analogin.h"

int main(int argc, char* argv[]){
	
	cout << "Comencing progrm:test_analogIn." << endl << endl;

	analogIn AIN0(0); // this creates the analogIN for ADC val 0. 

	cout << "AIN0" << AIN0.getNumber() << " ADC Sample is: " << AIN0.readADCsample() << endl;

	cout << "Terminate  program." << endl;

	return 0;
}	
