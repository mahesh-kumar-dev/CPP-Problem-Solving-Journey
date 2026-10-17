#include <iostream>
using namespace std;

int main (){

	// Create the 24-hour clock system using arithmetic and modulo operator
	int currentTime;
	int extraHours, finalTime24;
	
	cout << "=========== CLOCK 24-HOUR/12-HOUR SYSTEM ==========\n";
	cout << "Enter the current hours: ";
    
    // Validation test 1
	if(!(cin >> currentTime)){
        cout << "ERROR! Invalid hour.\n";
        return 1; // return immediately from the program 
    }

    // Validation test 2
    if(currentTime < 0 || currentTime > 23){
        cout << "ERROR! Hours must be between 0 and 23.\n";
        return 1; // return immediately from the program 
    }
    
		
	cout  << "Add extra hours: ";
	// Validation test 3
	if(!(cin >> extraHours)){
        cout << "ERROR! Invalid extra hours value.\n";
        return 1; // return immediately from the program 
    }

	
	// as 24 hours clock we have to use this formula
    // negative extra hours can be added
	finalTime24 = ((currentTime + extraHours ) % 24 + 24) % 24;
	
	
	// convert 24-hour system to 12-hour system
	int finalTime12;
	string period = (finalTime24 >= 12)? "PM": "AM";

	

	finalTime12 = finalTime24 % 12;
    if(finalTime12 == 0){
        finalTime12 = 12;
    }

    cout << "----------- CLOCK RESULTS -------------\n";
	cout << "Current Hours: " << currentTime << " hrs " << endl;
	cout << "Extra Hours: " << extraHours << " hrs" << endl;
	cout << "Final Hours (24hr): " << finalTime24 << " hrs" << endl;
	cout << "Final Hours (12hr): " << finalTime12 << " " << period << endl;

	return 0;
}
