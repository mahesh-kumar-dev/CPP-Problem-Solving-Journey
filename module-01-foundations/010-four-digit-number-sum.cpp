#include <iostream>
using namespace std;


int main() {
	// Takes 4 digit number and sum up each digit in the number
	
	int fourDigitNum;

	int ones, tens, hundreds, thousands;

	cout << "========= FOUR DIGIT SUM PROGRAM ==========\n";
	cout << "Enter the 4 digit number: ";

	// Validation test 1
	if(!(cin >> fourDigitNum)){
		cout << "ERROR! Invalid input.\n";
		return 1; // Return immediately from the program
	}
	
	// Validation test 2
	if(fourDigitNum < 1000 || fourDigitNum > 9999){
		cout << "ERROR! Number must contain four digit numbers.\n";
		return 1; // Return immediately from the program
	}


	ones = fourDigitNum % 10;
	int remaining = fourDigitNum / 10;

	tens = remaining % 10;
	remaining /= 10;

	hundreds = remaining % 10;
	remaining /= 10;

	int sum = ones + tens + hundreds + remaining;

	cout << "4 Digit Number: " << fourDigitNum << endl;
	cout << "Sum :  " << sum << endl;  


	return 0;
}
