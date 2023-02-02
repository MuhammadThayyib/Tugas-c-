#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    system("cls");
    string nama, nim;
    int nilai_angka;
    string nilai[9] = {"A", "A-", "B+", "B", "C+", "C", "C-", "D", "E"};
    
    cout << "Program konversi nilai angka ke nilai huruf" << endl;
    cout << "==========================================" << endl;
    cout << "Nama: ";
    getline(cin, nama);
    cout << "Nim: ";
    getline(cin, nim);
    cout << "==========================================" << endl;
    cout << "Masukkan nilai ujian anda pada mata kuliah algoritma(0-100): ";
    cin >> nilai_angka;

    if (nilai_angka <= 100 && nilai_angka >= 95)
        cout << "Nilai anda : " << nilai[0] << endl;
    else if (nilai_angka < 95 && nilai_angka >= 85)
        cout << "Nilai anda : " << nilai[1] << endl;
    else if (nilai_angka < 85 && nilai_angka >= 80)
        cout << "Nilai anda : " << nilai[2] << endl;
    else if (nilai_angka < 80 && nilai_angka >= 75)
        cout << "Nilai anda : " << nilai[3] << endl;
    else if (nilai_angka < 75 && nilai_angka >= 70)
        cout << "Nilai anda : " << nilai[4] << endl;
    else if (nilai_angka < 70 && nilai_angka >= 65)
        cout << "Nilai anda : " << nilai[5] << endl;
    else if (nilai_angka < 65 && nilai_angka >= 60)
        cout << "Nilai anda : " << nilai[6] << endl;
    else if (nilai_angka < 60 && nilai_angka >= 50)
        cout << "Nilai anda : " << nilai[7] << endl;
    else if (nilai_angka < 50)
        cout << "Nilai anda : E" << nilai[8] << endl;

    return 0;
}