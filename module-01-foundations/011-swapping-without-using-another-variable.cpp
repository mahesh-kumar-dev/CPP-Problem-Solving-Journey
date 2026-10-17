#include <iostream>
using namespace std;


int main() {
	// This program swap two numbers without using the 3rd variable
	
	// declaration of variables
	int num1, num2;

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
	cout << "\n----- Before Swapping ---------\n";
	cout << "First Number: " << num1 << endl;
	cout << "Second Number: " << num2 << endl << endl;

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	cout << "\n----- After Swapping ---------\n";
	cout << "First Number: " << num1 << endl;
	cout << "Second Number: " << num2 << endl;

	
	
	return 0;
}
