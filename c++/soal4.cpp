#include <iostream>
using namespace std;

int main() {
    int bintang;
    system("cls");

    cout << "Masukkan jumlah baris: ";
    cin >> bintang;
    cout << endl;

    for (int baris = 1; baris <= bintang; baris++)
    {
        for (int kolom = 1; kolom <= (baris - 1);kolom++){
            cout << " ";
        }
        for (int k = 1; k <= bintang;k++){
            cout << "* ";
        }
        cout << endl;
    }
        return 0;
}