#include <iostream>
using namespace std;


int main() {
	// This program takes the inputs of certain amount as multiple of 10 and then finds 
	// How many notes of 500,100,50,20,10 are there in the atm
	
	int totalAmount;
	int note500, note100, note50, note20, note10;
	
	cout << "============ ATM NOTES FINDING ==========\n";
	cout << "Enter the amount to withdraw from ATM: ";
	if(!(cin >> totalAmount)){
		cout << "ERROR! Enter a valid whole number amount.\n";
		return 1; // immediately exit from program after entering wrong input 
	}

	if(totalAmount <= 0 || totalAmount % 10 != 0){
		cout << "ERORR ! Withdrawal cannot be nonnegative greater than zero. or multiple of 10.\n";
		return 1; // immediately exit from program after entering wrong input 
	}

	note500 = totalAmount / 500;
	int remaining = totalAmount % 500;
	
	note100 = remaining /100;
	remaining = remaining % 100;
	
	note50 = remaining /50;
	remaining = remaining % 50;
	
	note20 = remaining /20;
	remaining = remaining % 20;

	note10 = remaining /10;
	
	
	
	

	cout << "\nTotal Price: " << totalAmount << " ruppees" << endl;
	cout << "500 Note: " << note500 << endl;	
	cout << "100 Note: " << note100 << endl;
	cout << "50 Note: " << note50 << endl;
	cout << "20 Note: " << note20 << endl;
	cout << "10 Note: " << note10 << endl;
	
	return 0;
}
