/*  Programmer  : Muhammad Thayyib
    Nim         : 22343024
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PHI 3.14

int main()
{
    char pilih;
    // Variabel keliling segitiga
    int a, t;            // a = alas, t = tinggi
    float sm, kSegitiga; // kSegitiga = Keliling segitiga, sm = sisi miring

    // Variabel keliling persegi panjang
    int panjang, lebar, keliling;

    // Variabel keliling lingkaran
    float k, d, r; // k = keliling, d = diameter, r = radius

    do
    {
        printf("1. Menghitung keliling segitiga\n");
        printf("2. Menghitung keliling persegi panjang\n");
        printf("3. Menghitung keliling lingkaran\n");
        printf("4. Keluar\n");
        printf("--------------------------------------\n");
        printf("Masukkan pilihan: ");
        scanf("%c", &pilih);
        fflush(stdin);
        switch (pilih)
        {
        case '1':
            printf("Program menghitung keliling segitiga\n");
            printf("------------------------------------\n");
            printf("Masukkan alas: ");
            scanf("%d", &a);
            fflush(stdin);
            printf("Masukkan tinggi: ");
            scanf("%d", &t);
            fflush(stdin);

            printf("\n");
            sm = sqrt((a * a) + (t * t));
            kSegitiga = a + t + sm;
            printf("Sisi miring: %.2f\n", sm);
            printf("Keliling segitiga adalah: %.2f", kSegitiga);
            printf("\n\n");
            break;
        case '2':
            // Program keliling persegi panjang
            printf("Program menghitung keliling persegi panjang\n");
            printf("-------------------------------------------\n");
            printf("Masukkan panjang: ");
            scanf("%d", &panjang);
            fflush(stdin);
            printf("Masukkan lebar: ");
            scanf("%d", &lebar);
            fflush(stdin);

            printf("\n");
            keliling = (2 * panjang) + (2 * lebar);
            printf("Keliling persegi panjang adalah: %d\n", keliling);
            printf("\n\n");
            break;
        case '3':
            // Program keliling lingkaran
            printf("Program menghitung keliling lingkaran\n");
            printf("-------------------------------------\n");
            printf("Masukkan diameter: ");
            scanf("%f", &d);
            fflush(stdin);
            r = d / 2;
            k = 2 * PHI * r;
            printf("Keliling lingkaran adalah: %.2f", k);
            break;
        case '4' : 
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != '4');

    return 0;
}