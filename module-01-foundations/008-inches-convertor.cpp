#include <iostream>
using namespace std;


int main (){
	// This program uses the / & % operators to convert the inches into the feet and inches
	int totalInches;
	int feet, inches;
	
	cout << "============ INCHES CONVERTOR =============\n";
	cout << "Enter the total inches: ";

	// Test case 1
	if(!(cin >> totalInches)){
		cout << "ERROR! Please enter a valid whole number.\n";
		return 1; // returns immediately from the program
	}

	// Test case 2
	if(totalInches < 0){
		cout << "ERROR! Inches cannot be negative.\n";
		return 1; // returns immediately from the program
	}


	
	// 1 feet = 12 inches
	feet = totalInches / 12;
	// to find the remaining inches we need the remainder after dividing by 12
	inches = totalInches % 12;

	cout << "Total Inches: " << totalInches << " inch" << endl;
	cout << "Feet: " << feet << " feet" << endl;
	cout << "Inches: " << inches << " inch " << endl;

	

	return 0;
}
