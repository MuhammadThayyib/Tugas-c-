#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14

int main() {
    int pilih;

    //Variabel rusuk kubus
    int sKubus, totKubus;

    //Variabel rusuk balok
    int pBalok, lBalok, tBalok, totBalok;

    //Variabel rusuk tabung
    int tTabung, rTabung;
    float totTabung;

    do
    {
        printf("\n");
        printf("1. Menghitung panjang rusuk kubus\n");
        printf("2. Menghitung panjang rusuk balok\n");
        printf("3. Menghitung panjang rusuk tabung\n");
        printf("4. Keluar\n");
        printf("--------------------------------------\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilih);

        switch (pilih)
        {
        case 1:
            printf("Masukkan sisi kubus: ");
            scanf("%d", &sKubus);
            totKubus = 6 * (sKubus * sKubus);
            printf("Total panjang rusuk kubus adalah: %d\n", totKubus);
            break;
        case 2:
            printf("Masukkan panjang balok: ");
            scanf("%d", &pBalok);
            printf("Masukkan lebar balok: ");
            scanf("%d", &lBalok);
            printf("Masukkan tinggi balok: ");
            scanf("%d", &tBalok);
            totBalok = 4 * (pBalok + lBalok + tBalok);
            printf("Total panjang rusuk balok adalah: %d\n", totBalok);
            break;
        case 3:
            printf("Masukkan tinggi tabung: ");
            scanf("%d", &tTabung);
            printf("Masukkan jari-jari tabung: ");
            scanf("%d", &rTabung);
            totTabung = (2 * (2 * PHI * rTabung)) + (2 * tTabung);
            printf("Total panjang rusuk tabung adalah: %.2f\n", totTabung);
            break;
        case 4:
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != 4);

    return 0;
}