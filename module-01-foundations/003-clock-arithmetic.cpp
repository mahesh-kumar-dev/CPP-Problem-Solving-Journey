#include <iostream>
using namespace std;

int main (){

	// Create the 24-hour clock system using arithmetic and modulo operator
	int currentTime;
	int extraHours, finalTime;
	
	cout << "=========== CLOCK 24-HOUR SYSTEM ==========\n";
	cout << "Enter the current hours: ";
	cin >> currentTime;
		
	cout  << "Add extra hours: ";
	cin >> extraHours;
	
	// as 24 hours clock we have to use this formula
	finalTime = (currentTime + extraHours ) % 24 ;

	cout << "Current Hours: " << currentTime << " hrs " << endl;
	cout << "Extra Hours: " << extraHours << " hrs" << endl;
	cout << "Final Hours: " << finalTime << " hrs" << endl;

	return 0;
}
