#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilih;
    long int jj, mm, dd;
    long int total_detik;

    do
    {
        printf("1. konversi jam ke total detik\n");
        printf("2. konversi total detik ke jam\n");
        printf("3. keluar\n");
        printf("--------------------------------------\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilih);

        switch (pilih)
        {
        case 1:
            //ubah jam ke total detik
            printf("Jam: ");
            scanf("%ld", &jj);
            printf("Menit: ");
            scanf("%ld", &mm);
            printf("Detik: ");
            scanf("%ld", &dd);
            total_detik = (jj * 3600) + (mm * 60) + dd;
            printf("Total detiknya adalah: %ld\n", total_detik);
            break;
        case 2:
            //ubah total detik ke jam menit detik
            printf("Masukkan jumlah detik: ");
            scanf("%ld", &dd);
            jj = dd / 3600;
            dd = dd - (3600 * jj);
            mm = dd / 60;
            dd = dd - (60 * mm);
            printf("Waktunya adalah: %ld:%ld:%ld\n", jj, mm, dd);
            break;
        case 3:
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != 3);

    return 0;
}