#include <iostream>
using namespace std;

int main(){
    // In this problem we would use the / and % operator to get our desired result
    // So we have to identify each position digit then multiply by multiple of 10 each to get desired on 
    // variable declarations 
    int originalNumber;
    int hundreds, tens, ones;
    int reverseNumber;

    cout << "======== DIGIT REVERSAL PROGRAM =========\n";
    // output stream for taking input from user 
    cout << "Enter a three digit positive number: ";
    if(!(cin >> originalNumber)){
        cout << "ERROR! Please enter a valid integer.\n";
        return 1; // return immediately from the program
    }

    // check the limits
    if(originalNumber < 100 || originalNumber > 999){
        cout << "ERROR ! : Input is not valid three digit number.";
        return 1; // return immediately from the program
    }

    ones = originalNumber % 10;
    tens = (originalNumber / 10) % 10;
    hundreds = originalNumber / 100;

    reverseNumber = (ones*100) + (tens*10) + hundreds;

    // Result
    cout << "Original Number: " << originalNumber << endl;
    cout << "Reversed Number: " << reverseNumber << endl;


    return 0;
}
