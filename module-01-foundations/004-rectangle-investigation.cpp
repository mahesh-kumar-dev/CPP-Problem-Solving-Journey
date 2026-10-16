#include <iostream>
using namespace std;

int main(){
	// This program handles the area and perimeter calculation of the rectangle and also 
	// determine whether it is square
	int length , breadth;
	double area, perimeter;
	
	cout << "========== RECTANGLE INVESTIGATOR =============\n";
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter breadth: ";
	cin >> breadth;
	
	// these are basic mathematic formulas 
	// A = L x B
	// P = L + B + L + B = 2*(L+B)  Perimeter is summation of all side of the shape
	area = length * breadth;
	perimeter = 2*(length + breadth);
	
	

	cout << "Length: " << length << endl;
	cout << "Breadth: " << breadth << endl;
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
	
	// Shape is square if the length and breadth are equal in magnitude
	if(length == breadth){
	 	cout << "It is square.";
		
	}else {
	 	cout << "It is rectangle.";
	 }
	

	

	return 0;
}
