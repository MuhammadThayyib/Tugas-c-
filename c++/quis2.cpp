#include <iostream>
using namespace std;

int main() {
    system("cls");
    float celcius, fahrenheit;

    cout << "Masukkan suhu dalam fahrenheit: ";
    cin >> fahrenheit;
    celcius = (fahrenheit - 32) * 5 / 9;
    cout<< "Suhu dalam celcius: " << celcius << endl;
    return 0;
}