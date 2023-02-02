#include <stdio.h>

int main (){
    //Program menghitung tinggi segitiga
    float  luas,alas,tinggi;
    printf("Menghitung Tinggi Segitiga:\n");
    printf ("Masukkan panjang alas segitiga :");
    scanf ("%f",&alas);
    printf ("Masukkan total luas :");
    scanf ("%f",&luas);
    tinggi =0.5*alas/luas;
    printf ("Maka tinggi segitiga adalah :%.2f",tinggi);



}
