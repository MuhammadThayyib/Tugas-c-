#include <stdio.h>
#include <stdlib.h>

int main() {
    int total = 7;
    int tengah = total / 2 + 1;
    int baris, kolom;

    system("cls");

    for (baris = 1; baris <= total; baris++)
    {
        for (kolom = 1; kolom <= total; kolom++)
        {
            if (baris==tengah || kolom==tengah || (baris==1 && kolom>=tengah) || (kolom==1 && baris<=tengah) || (baris==total && kolom<=tengah) || (kolom==total && baris>=tengah))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\total");
    }

    return 0;
}