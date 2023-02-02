#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cm, m, km;
    int pilih;

    do
    {
        printf("1. Konversi cm ke km dan m\n");
        printf("2. Konversi km ke m dan cm\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilih);
        switch (pilih)
        {
        case 1:
            printf("Masukkan nilai dalam cm: ");
            scanf("%d", &cm);
            km = cm / 100000;
            cm = cm % 100000;
            m = cm / 100;
            cm = cm % 100;
            printf("km: %d\n", km);
            printf("m: %d\n", m);
            printf("cm: %d\n", cm);
            break;
        case 2:
            printf("Masukkan nilai dalam km: ");
            scanf("%d", &km);
            m = km * 100;
            cm = km * 100000;
            printf("km: %d\n", km);
            printf("m: %d\n", m);
            printf("cm: %d\n", cm);
            break;
        case 3:
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != 3);

    return 0;
}