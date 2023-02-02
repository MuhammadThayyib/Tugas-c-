#include <iostream>
using namespace std;

int main() {
    char nim[8];
    double nohp;
    string nama, asal;

    cout << "masukkan nama: ";
    getline(cin, nama);
    cout << "masukkan nim: ";
    cin >> nim;
    cout << "masukkan asal: ";
    cin >> asal;

    cout << endl << endl;

    cout << "Halo, " << nama << endl;
    cout << "Nama   : " << nama << endl;
    cout << "Nim    : " << nim << endl;
    cout << "Asal   : " << asal << endl;
    return 0;
}