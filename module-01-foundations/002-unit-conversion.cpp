#include <iostream>
using namespace std;

int main (){
    // Unit Convertor
    double km;
    int meter, centimeter;

    cout << "============ UNIT CONVERTER PROGRAM =======\n";
    cout << "Enter the distance in km: ";
    cin >> km;

    meter = km*1000; // 1km = 1000 meters
    centimeter = meter*100;  // 1m = 100cm

    cout << "Distance in km: " << km  << " km"<< endl;
    cout << "Distance in meter: " << meter << " m"<< endl;
    cout << "Distance in centimeter: " << centimeter << " cm" << endl;

    return 0;

}
