#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    const float phi = 3.14;
    //Menghitung keliling segitiga
    int p_alas_segitiga, tSegitiga, psm_segitiga;
    float keliling_s;
    //Menghitung keliling persegi panjang
    int panjang_pp, lebar_pp, keliling_pp;
    //Menghitung keliling lingkaran
    int d_lingkaran, k_lingkaran;

    system("cls");
    //Menghitung keliling segitiga
    printf("Masukkan panjang alas: \n");
    scanf("%d", &p_alas_segitiga); fflush(stdin);
    printf("Masukkan tinggi segitiga: \n");
    scanf("%d", &tSegitiga); fflush(stdin);
    //hitung panjang sisi miring segitiga (gunakan rumus phitagoras)
    psm_segitiga=sqrt((p_alas_segitiga*p_alas_segitiga)+(tSegitiga*tSegitiga));
    keliling_s = p_alas_segitiga + tSegitiga + psm_segitiga;
    printf("\n\n");
    printf("Panjang alas = %d \n", p_alas_segitiga);
    printf("Panjang tinggi segitiga = %d \n", tSegitiga);
    printf("Panjang sisi miring segitiga = %d \n", psm_segitiga);
    printf("Keliling segitiga = %f \n", keliling_s);

    return 0;
}
