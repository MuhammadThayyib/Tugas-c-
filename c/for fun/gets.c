#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat[50];
    int jumlah;

    printf("Masukkan sebuah string: ");
    fgets(kalimat, sizeof(kalimat), stdin);
    //gets(kalimat);

    jumlah = strlen(kalimat)-1;

    printf("Jumlah karakter adalah %d\n", jumlah);
    printf("Kalimat setelah di reverse: %s", strrev(kalimat));

    return 0;
}