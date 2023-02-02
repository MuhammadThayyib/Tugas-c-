#include <stdio.h>
#include <stdlib.h>
#define PHI 3.14

int main() {
    int pilih;

    //Variabel volume kubus
    int sKubus, vKubus;

    //Variabel volume kotak
    int pKotak, lKotak, tKotak, vKotak;

    //Variabel volume tabung
    int rTabung, tTabung;
    float vTabung;

    //Variabel volume bola
    int rBola;
    float vBola;

    do
    {
        printf("\n");
        printf("1. Menghitung volume kubus\n");
        printf("2. Menghitung volume kotak\n");
        printf("3. Menghitung volume tabung\n");
        printf("4. Menghitung volume bola\n");
        printf("5. Keluar\n");
        printf("--------------------------------------\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilih);

        switch (pilih)
        {
        case 1:
            printf("Masukkan sisi Kubus: ");
            scanf("%d", &sKubus);
            vKubus=sKubus*sKubus*sKubus;
            printf("Volume kubus adalah: %d\n", vKubus);
            break;
        case 2:
            printf("Masukkan panjang kotak: ");
            scanf("%d", &pKotak);
            printf("Masukkan lebar kotak: ");
            scanf("%d", &lKotak);
            printf("Masukkan tinggi kotak: ");
            scanf("%d", &tKotak);
            vKotak = pKotak * lKotak * tKotak;
            printf("Volume kotak adalah: %d\n", vKotak);
            break;
        case 3:
            printf("Masukkan jari-jari tabung: ");
            scanf("%d", &rTabung);
            printf("Masukkan tinggi tabung: ");
            scanf("%d", &tTabung);
            vTabung = PHI * (rTabung * rTabung) * tTabung;
            printf("Volume tabung adalah: %.2f\n", vTabung);
            break;
        case 4:
            printf("Masukkan jari-jari bola: ");
            scanf("%d", &rBola);
            vBola = 4 / 3 * PHI * (rBola * rBola);
            printf("Volume bola adalah: %.2f\n", vBola);
            break;
        case 5:
            break;
        default:
            printf("Masukkan pilihan dengan benar");
        }
    } while (pilih != 5);

    return 0;
}