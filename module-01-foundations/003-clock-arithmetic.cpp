#include <iostream>
using namespace std;

int main (){

	// Create the 24-hour clock system using arithmetic and modulo operator
	int currentTime;
	int extraHours, finalTime24;
	
	cout << "=========== CLOCK 24-HOUR/12-HOUR SYSTEM ==========\n";
	cout << "Enter the current hours: ";
	cin >> currentTime;
		
	cout  << "Add extra hours: ";
	cin >> extraHours;
	
	// as 24 hours clock we have to use this formula
	finalTime24 = (currentTime + extraHours ) % 24 ;
	
	
	// convert 24-hour system to 12-hour system
	int finalTime12;
	string period;

	if(finalTime24 >= 12){
		period = "PM";
	} else {
		period = "AM";
	}

	// Converting hours to 12 hour scale
	if(finalTime24 == 0){
		finalTime12 = 0; // 00:00 is 12 AM
	} else if(finalTime24 > 12){
		finalTime12 = finalTime24 - 12; // 13 becomes 1
	} else {
		finalTime12 = finalTime24; // 1 through 12 stay same 
	}

	cout << "Current Hours: " << currentTime << " hrs " << endl;
	cout << "Extra Hours: " << extraHours << " hrs" << endl;
	cout << "Final Hours (24hr): " << finalTime24 << " hrs" << endl;
	cout << "Final Hours (12hr): " << finalTime12 << " " << period << endl;

	return 0;
}
