#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14

int main() {
    int pilih;

    //Variabel luas segi empat
    int sSegi4, lSegi4;

    //Variabel luas segi tiga sama kaki
    int aSegi3, tSegi3;
    float lSegi3;

    //Variabel luas lingkaran
    int rLingkaran;
    float lLingkaran;

    //Variabel luas bola
    int rBola;
    float lBola;

    do
    {
        printf("\n");
        printf("1. Menghitung luas segi empat\n");
        printf("2. Menghitung luas segi tiga sama kaki\n");
        printf("3. Menghitung luas lingkaran\n");
        printf("4. Menghitung luas bola\n");
        printf("5. Keluar\n");
        printf("--------------------------------------\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilih);

        switch (pilih)
        {
        case 1:
            printf("Masukkan sisi segi empat: ");
            scanf("%d", &sSegi4);
            lSegi4 = sSegi4 * sSegi4;
            printf("Luas segi empat adalah: %d\n", lSegi4);
            break;
        case 2:
            printf("Masukkan alas segitiga: ");
            scanf("%d", &aSegi3);
            printf("Masukkan tinggi segitiga: ");
            scanf("%d", &tSegi3);
            lSegi3 = (aSegi3 * tSegi3)/2;
            printf("Luas segitiga sama kaki adalah: %.2f\n", lSegi3);
            break;
        case 3:
            printf("Masukkan jari-jari lingkaran: ");
            scanf("%d", &rLingkaran);
            lLingkaran = PHI * rLingkaran * rLingkaran;
            printf("Luas lingkaran adalah: %.2f\n", lLingkaran);
            break;
        case 4:
            printf("Masukkan jari-jari bola: ");
            scanf("%d", &rBola);
            lBola = 4 * PHI * (rBola * rBola);
            printf("Luas bola adalah: %.2f\n", lBola);
            break;
        case 5:
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != 5);

    return 0;
}