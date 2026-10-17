#include <iostream>
#include <iomanip>  // this is library which has the formatting functionality
// fixed, setprecision(n), setw(), left, right,setfill('')
using namespace std;

int main (){
    // Unit Convertor
    double km;
    double meter, centimeter;

    cout << "============ UNIT CONVERTER PROGRAM =======\n";
    cout << "Enter the distance in km: ";
    if(!(cin >> km)){
        cout << "ERROR ! Please enter a valid number.\n";  // validation test 1
        return 1; // exit program immediately on error
    }

    if(km < 0){
        cout << "ERROR ! Distance cannot be negative.\n";  // validation test 2
        return 1; // exit program immediately on error
    }

    meter = km*1000.0; // 1km = 1000 meters
    centimeter = meter*100.0;  // 1m = 100cm

    // it would fixed the number of digits after decimals to 4
    cout << fixed << setprecision(4);
    cout << "\n-------------- RESULTS -------------------\n";
    cout << left << setw(25) << "Distance in km: " << km  << " km"<< endl;
    cout << left << setw(25) << "Distance in meter: " << meter << " m"<< endl;
    cout << left << setw(25) << "Distance in centimeter: " << centimeter << " cm" << endl;

    return 0;

}
