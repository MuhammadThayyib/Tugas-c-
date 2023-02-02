#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;

    printf("Programmer  : Muhammad Thayyib\n");
    printf("Nim         : 22343024\n");

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    switch (angka)
    {
    case 1:
        printf("Satu");
        break;
    case 2:
        printf("Dua");
        break;
    case 3:
        printf("Tiga");
        break;
    case 4:
        printf("Empat");
        break;
    case 5:
        printf("Lima");
        break;
    case 6:
        printf("Enam");
        break;
    case 7:
        printf("Tujuh");
        break;
    case 8:
        printf("Delapan");
        break;
    case 9:
        printf("Sembilan");
        break;
    case 10:
        printf("Sepuluh");
        break;
    default:
        printf("Angka harus 0 hingga 10");
        break;
    }
    return 0;
}