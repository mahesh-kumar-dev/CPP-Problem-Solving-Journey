#include <iostream>
using namespace std;


int main () {
	// This program converts the days into the years, weeks, days
	int totalDays;
	int years, weeks, days;

	cout << "================= DAYS CONVERTOR PROGRAM =============\n";
	cout << "Enter the days: ";

	// validation test case 1
	if(!(cin >> totalDays)){
		cout << "ERROR! Please enter a valid whole number.\n";
		return 1; // returns immediately from the program
	}

	// validation test case 2
	if(totalDays < 0){
		cout << "ERROR! Days cannot be negative.\n";
		return 1; // returns immediately from the program
	}

	
	// It would directly calculate the years as 1 year = 365 days
	years = totalDays / 365;
	// totalDays modulo 365 gives as the days before after removing years and then to find the 
	// weeks resultant would be divided by 7 
	weeks = (totalDays % 365) / 7;
	// totalDays modulo 365 gives as the days before after removing years and then for the remaining days
	// we would take the resultant modulo to 7 
	days = (totalDays % 365 ) % 7;


	cout << "Total Days :  " << totalDays << " days"<<endl;
	cout << "Years :  " << years << " years" << endl;
	cout << "Weeks :  " << weeks << " weeks" << endl;
	cout << "Days :  " << days << " days"<< endl;
	return 0;
}
