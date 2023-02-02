#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilih, jresis, r[99], rtotals = 0;
    float rtotalp = 0, akhir;

    do
    {
        printf("1. Rangkaian Resistor Seri\n");
        printf("2. Rangkaian Resistor Paralel\n");
        printf("3. Keluar\n");
        printf("--------------------------------------\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilih);
        printf("\n");
        switch (pilih)
        {
        case 1:
            printf("-- Rangkaian Resistor Seri --\n\n");
            printf("Masukkan Jumlah Resistor : ");
            scanf("%d", &jresis);
            for (int i = 0; i < jresis; i++)
            {
                printf("Masukkan R %d : ", i + 1);
                scanf("%d", &r[i]);
                rtotals = rtotals + r[i];
            }
            printf("\n-- Daftar Dari R --\n");
            for (int i = 0; i < jresis; i++)
            {
                printf("Daftar R %d : %d\n", i + 1, r[i]);
            }
            printf("Total dari R adalah %d\n", rtotals);
            break;
        case 2:
            printf("-- Rangkaian Resistor Paralel --\n\n");
            printf("Masukkan Jumlah Resistor : ");
            scanf("%d", &jresis);
            for (int i = 0; i < jresis; i++)
            {
                printf("Masukkan R %d : ", i + 1);
                scanf("%d", &r[i]);
                rtotalp = rtotalp + (1.0 / r[i]);
            }
            printf("\n-- Daftar Dari R --\n");
            for (int i = 0; i < jresis; i++)
            {
                printf("Daftar R %d : %d\n", i + 1, r[i]);
            }
            akhir = 1.0 / rtotalp;
            printf("Total dari R adalah %f\n", akhir);
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != 3);
    return 0;
}