#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_NASABAH = 100;

struct NASABAH{
    string nama;
    string nomorRekening;
    double saldo;
};

int cariNasabah(NASABAH nasabah[], int jumlahNasabah, string nomorRekening){
    for(int i = 0; i < jumlahNasabah; i++){
        if(nasabah[i].nomorRekening == nomorRekening){
            return i;
        }
    }
    return -1;
}

int main(){
    NASABAH nasabah[MAX_NASABAH];
    int jumlahNasabah = 0;

    // Membaca data nasabah dari file
    ifstream fileIn("nasabah.txt");
    if(fileIn.is_open()){
        while(!fileIn.eof()){
            getline(fileIn, nasabah[jumlahNasabah].nama);
            getline(fileIn, nasabah[jumlahNasabah].nomorRekening);
            fileIn >> nasabah[jumlahNasabah].saldo;
            fileIn.ignore(); // menghapus newline character
            jumlahNasabah++;
            }
        }
        fileIn.close();
    }

    // Menampilkan menu ATM
    int pilihan;
    string nomorRekening;
    do{
        cout << "ATM" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Transfer" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch(pilihan){
            case 1: // Cek Saldo
                cout << "Masukkan nomor rekening: ";
                cin >> nomorRekening;
                int index = cariNasabah(nasabah, jumlahNasabah, nomorRekening);
                if(index != -1){
                    cout << "Nama: " << nasabah[index].nama << endl;
                    cout << "Saldo: Rp " << nasabah[index].saldo << endl;
                } else {
                    cout << "Nomor rekening tidak ditemukan" << endl;
                }
                break;
            case 2: // Transfer
                cout << "Masukkan nomor rekening tujuan: ";
                cin >> nomorRekening;
                int indexTujuan = cariNasabah(nasabah, jumlahNasabah, nomorRekening);
                if(indexTujuan != -1){
                    double jumlah;
                    cout << "Masukkan jumlah yang ingin ditransfer: Rp ";
                    cin >> jumlah;
                    if(jumlah > nasabah[index].saldo){
                        cout << "Saldo tidak cukup" << endl;
                    } else {
                        nasabah[index].saldo -= jumlah;
                        nasabah[indexTujuan].saldo += jumlah;
                        cout << "Transfer berhasil" << endl;
                    }
                } else {
                    cout << "Nomor rekening tujuan tidak ditemukan" << endl;
                }
                break;
            case 3: // Keluar
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
                break;
        }

    } while(pilihan != 3);

    // Menyimpan data nasabah ke file
    ofstream fileOut("nasabah.txt");
    if(fileOut.is_open()){
        for(int i = 0; i < jumlahNasabah; i++){
            fileOut << nasabah[i].nama << endl;
            fileOut << nasabah[i].nomorRekening << endl;
            fileOut << nasabah[i].saldo << endl;
        }
        fileOut.close();
    }

    return 0;
}