#include <iostream>
using namespace std;

int main() {
	// This program swap two numbers using temporary variable
	int num1 , num2, temp;

	cout << "============= VARIABLE SWAP WITH 3RD TEMP VARIABLE PROGRAM ================\n ";

	cout << "Enter first number: ";
	if(!(cin >> num1)){
		cout << "ERROR! Invalid first number.\n";
		return 1; // Return immediately from thr program
	}
	cout << "Enter second number: ";
	if(!(cin >> num2)){
		cout << "ERROR! Invalid first number.\n";
		return 1; // Return immediately from thr program
	}
	cout << "\n------ Before Swapping ------\n";
	cout << "First number: " << num1 << endl;
	cout << "Second number: " << num2 << endl << endl;
	
	// temp variable has value of num1 
	temp = num1;
	// num1 variable has value of num2 
	num1 = num2;
	// num2 variable has value of the temp(which has num1 value)
	num2 = temp;

	
	
	cout << "------- After Swapping --------\n";
	cout << "First number: " << num1 << endl;
	cout << "Second number: " << num2 << endl << endl;
	
	
	
	return 0;
}
