#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int menu;

    cout << "masukkan dua buah angka, untuk setiap angka tekan enter" << endl;
    cin >> a;
    cin >> b;
    cout << "Menu: " << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "Masukkan pilihan: ";
    cin >> menu;

    if ((menu >= 1) && (menu <= 3))
    {
        switch (menu)
        {
        case 1:
            c = a + b;
            break;
        case 2:
            c = a - b;
            break;
        case 3:
            c = a * b;
            break;
        }
    }
    else
    {
        c = 0;
        cout << "Menu tidak valid" << endl;
    }
    cout << "Jawabannya adalah " << c << endl;
    return 0;
}