#include <iostream>
using namespace std;

int main() {
    int alas, tinggi;
    float luas;

    system("cls");
    cout << "Masukkan nilai alas: ";
    cin >> alas;
    cout << "Masukkan nilai tinggi: ";
    cin >> tinggi;

    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga adalah: " << luas;
    return 0;
}