#include <iostream>
using namespace std;

int main()
{
    double temperature;
    char unit;
    // Taking Value of Temperature From User
    cout << " Enter The Temperature :"<< endl;
    cin >> temperature;
    // Asking Convertion Unit
    cout << " Enter The Unit (C for celsius , F for Fahrenheit , K for Kelvin ): "<<endl;
    cin >> unit;

    // conversion expression used are:
    // F=(9/5)*C+32
    // K=273.15+C

    switch (unit)
    {
    case 'C':
        cout << "Fahrenheit: " << (temperature * 9 / 5) + 32 << endl;
        cout << "Kelvin: " << temperature + 273.15 << endl;
        break;
    case 'F':
        cout << "Celsius: " << (temperature - 32) * 5 / 9 << endl;
        cout << "Kelvin: " << (temperature - 32) * 5 / 9 + 273.15 << endl;
        break;
    case 'K':
        cout << "Celsius: " << temperature - 273.15 << endl;
        cout << "Fahrenheit: " << (temperature - 273.15) * 9 / 5 + 32 << endl;
        break;
    default:
        cout << "Invalid unit." << endl;
    }
}