#include <iostream>
using namespace std;

int main() {
    int hasil;
    int a, b;
    char op;

    cout << "Nama: Muhammad Thayyib" << endl;
    cout << "Nim: 22343024" << endl;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan operator(kalibataku): ";
    cin >> op;

    switch (op)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;
    case '%':
        hasil = a % b;
        break;
    default:
        cout << "Karakter yang anda masukkan salah";
        break;
    }
    cout << "Hasil: " << hasil << endl;
    return 0;
}