#include <iostream>
using namespace std;


int main (){
	
	// This program use the / & % operators to convert seconds into hours,minutes & seconds
	long long timeInSeconds;
	long long hours, minutes, seconds;

	cout << "=========== SECONDS CONVERTOR PROGRAM ===========\n";
	cout << "Enter time in seconds: ";

	// Validation test case 1
	if(!(cin >> timeInSeconds)){
		cout << "ERROR! Please enter a valid whole number.\n";
		return 1; // returns immediately from the program
	}

	// Validation test case 2
	if(timeInSeconds < 0){
		cout << "ERROR! Time cannot be negative.\n";
		return 1; // returns immediately from the program

	}


	

	// As we know that the 1 hour = 3600sec	
	hours = timeInSeconds / 3600;
	// as we divide the seconds by 60 we got minutes and and then through away the hours 
	minutes = (timeInSeconds / 60) % 60;
	// as we make modulo of 60 we get easily 
	seconds = timeInSeconds % 60;
	
	cout << "Hours: " << hours << " hrs" << endl;
	cout << "Minutes: " << minutes << " min" << endl;
	cout << "Seconds: " << seconds << " sec" << endl;

	return 0;
}
