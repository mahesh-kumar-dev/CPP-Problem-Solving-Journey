#include <iostream>
using namespace std;

int main(){
	// This program handles the area and perimeter calculation of the rectangle and also 
	// determine whether it is square
	int length , breadth;
	long long area, perimeter;
	
	cout << "========== RECTANGLE INVESTIGATOR =============\n";
	cout << "Enter length: ";

	// Input validation test 1
	if(!(cin >> length)){
		cout << "ERROR! Invalid length.\n";
		 return 1; // exit program immediately on error
	}

	// Input validation test 2
	cout << "Enter breadth: ";
	if(!(cin >> breadth)){
		cout << "ERROR! Invalid breadth.\n";
		 return 1; // exit program immediately on error
	}


	if(length <= 0 || breadth <=0){
		cout << "ERRORS! Dimensions must be positive and greater than zero.\n";
		 return 1; // exit program immediately on error
	}
	
	// these are basic mathematic formulas 
	// A = L x B
	// P = L + B + L + B = 2*(L+B)  Perimeter is summation of all side of the shape
	area = 1LL* length * breadth;
	perimeter = 2LL*(length + breadth);
	
	

	cout << "Length: " << length << endl;
	cout << "Breadth: " << breadth << endl;
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
	
	// Shape is square if the length and breadth are equal in magnitude
	if(length == breadth){
	 	cout << "It is square.\n";
		
		
	}else {
	 	cout << "It is rectangle.\n";
		
	 }
	

	

	return 0;
}
