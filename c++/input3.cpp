#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system("cls");
    int usia, angkaSial, tanggal_jadian;
    string univ;
    /*cout << "Berapa usia anda?: ";
    cin >> usia;
    cout << "Usia anda adalah: " << usia << " Tahun" << endl;

    cout << "Angka sial: ";
    cin >> angkaSial;
    cout << "Angka sial anda: " << angkaSial << endl;

    cout << "Kapan tanggal jadian anda: ";
    cin >> tanggal_jadian;
    cout << "Anda jadian tanggal " << tanggal_jadian << " september" << endl;
    */
    cout << "Dimanakah ente berkuliah: ";
    getline(cin, univ);
    cout << "Ente berkuliah di " << univ << endl;
    return 0;
}