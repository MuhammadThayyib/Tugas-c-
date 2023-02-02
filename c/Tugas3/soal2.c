#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14

int main() {
    int pilih;

    //Variabel selimut kubus
    int s, lsKubus;

    //Variabel selimut balok
    int pBalok, lBalok, tBalok, lsBalok;

    //Variabel selimut tabung
    int dTabung, tTabung;
    float lsTabung;

    do
    {
        printf("\n");
        printf("1. Menghitung luas selimut kubus\n");
        printf("2. Menghitung luas selimut balok\n");
        printf("3. Menghitung luas selimut tabung\n");
        printf("4. Keluar\n");
        printf("--------------------------------------\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilih);
        
        switch (pilih)
        {
        case 1:
            printf("Masukkan sisi kubus: ");
            scanf("%d", &s);
            lsKubus = 6 * (s * s);
            printf("Luas selimut kubus adalah : %d\n", lsKubus);
            break;
        case 2:
            printf("Masukkan panjang balok: ");
            scanf("%d", &pBalok);
            printf("Masukkan lebar balok: ");
            scanf("%d", &pBalok);
            printf("Masukkan tinggi balok: ");
            scanf("%d", &pBalok);
            lsBalok = (2 * (pBalok *lBalok))+(2*(pBalok *tBalok))+(2*(lBalok*tBalok));
            printf("Luas selimut balok adalah : %d\n", lsBalok);
            break;
        case 3:
            printf("Masukkan diameter tabung: ");
            scanf("%d", &dTabung);
            printf("Masukkan tinggi tabung: ");
            scanf("%d", &tTabung);
            lsTabung = 2*(PHI * dTabung / 2 * 2) + tTabung * PHI * dTabung;
            printf("Luas selimut tabung adalah: %.2f\n", lsTabung);
            break;
        case 4:
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != 4);
    
    return 0;
}