#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Masukkan jumlah baris segitiga: ";
    cin >> n;


    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;	
}