#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil1, bil2, bil3;

    printf("Programmer  : Muhammad Thayyib\n");
    printf("Nim         : 22343024\n");

    printf("Masukkan bilangan 1: ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan 2: ");
    scanf("%d", &bil2);
    printf("Masukkan bilangan 3: ");
    scanf("%d", &bil3);

    printf("\n\n");

    if (bil1 > bil2 && bil1 > bil3)
    {
        printf("Bilangan 1 terbesar\n");
        if (bil1 % 2 == 0)
        {
            printf("Bilangan 1 genap\n");
        }
        else
        {
            printf("Bilangan 1 ganjil\n");
        }
    }
    else if (bil2 > bil1 && bil2 > bil3)
    {
        printf("Bilangan 2 terbesar\n");
        if (bil2 % 2 == 0)
        {
            printf("Bilangan 2 genap\n");
        }
        else
        {
            printf("Bilangan 2 ganjil\n");
        }
    }
    else
    {
        printf("Bilangan 3 terbesar\n");
        if (bil3 % 2 == 0)
        {
            printf("Bilangan 3 genap\n");
        }
        else
        {
            printf("Bilangan 3 ganjil\n");
        }
    }

    return 0;
}