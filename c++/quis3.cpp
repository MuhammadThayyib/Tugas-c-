#include <iostream>
using namespace std;

int main() {
    float celcius, fahrenheit, kelvin;

    cout << "Nama: Muhammad Thayyib" << endl;
    cout << "Nim: 22343024" << endl;

    cout << "Masukkan suhu dalam celcius: ";
    cin >> celcius;

    fahrenheit = (celcius * 9 / 5) + 32;
    kelvin = celcius + 273.15;

    cout << "Celcius: " << celcius << "C" << endl;
    cout << "kelvin: " << kelvin << "K" << endl;
    cout << "fahrenheit: " << fahrenheit << endl;

    return 0;   
}