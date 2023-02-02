#include <iostream>
using namespace std;

void head()
{
    cout << "********************************************************" << endl;
    cout << "Programmer\t: Muhammad Thayyib" << endl;
    cout << "Nim\t\t:22343024" << endl;
    cout << "Uas Praktikum Algoritma Pemrograman" << endl;
    cout << "Program Data Penjualan Buku" << endl;
    cout << "********************************************************" << endl;
}

int main()
{
    string judul[50];
    string kode[50];
    int banyak[50];
    int jumlah;
    double hargaSatu[50];
    double hargaTotal[50];
    double totharga;

    system("cls");
    head();

    cout << "Masukkan jumlah barang: ";cin >> jumlah;

    for (int i = 0; i < jumlah; i++)
    {
        cout << "=========================================" << endl;
        cout << "Buku ke-" << i + 1 << endl;
        cout << "Kode Buku: ";
        cin.ignore();
        getline(cin, kode[i]);
        cout << "Nama Buku: ";
        getline(cin, judul[i]);
        cout << "Harga satuan: ";
        cin >> hargaSatu[i];
        cout << "Banyak barang: ";
        cin >> banyak[50];
        hargaTotal[i] = hargaSatu[i] * banyak[50];
        cout << "Harga total " << judul[i] << ": " << hargaTotal[i] << endl;
    }

    cout << "==================================================================" << endl;

    //menghitung total harga
    for (int i = 0; i < jumlah; i++)
    {
        totharga += hargaTotal[i];
    }
    cout << endl << "Total yang harus dibayar adalah: Rp" << totharga << endl;

    return 0;
}