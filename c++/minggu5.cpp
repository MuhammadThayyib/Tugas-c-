#include <iostream>
#include <math.h>
using namespace std;

int main() {
    system("cls");
    char nilai = 'A';
    string kalimat = "Kelas bahasa c++";
    int umur = 98;
    double IPK = 4.0;
    bool apakahLanang = false; //it can be false or true

    //string ====================
    cout << kalimat.length() << endl;
    cout << kalimat[1] << endl;
    cout << kalimat.find("c++") << endl;

    //arithmetic
    cout << "Hasil dari 4 + 3 = " << 4 + 3 << endl;
    cout << "Hasil dari 4 - 3 = " << 4 - 3 << endl;
    cout << "Hasil dari 4 * 3 = " << 4 * 3 << endl;
    cout << "Hasil dari 4 / 3 = " << 4 / 3 << endl;
    cout << "Hasil dari 4 ^ 3 = " << pow(4, 5) << endl;
    cout << "Hasil dari akar 4 = " << sqrt(4) << endl;
    cout << "Pembulatan dari 7.15 = " << round(7.15) << endl;

    return 0;
}