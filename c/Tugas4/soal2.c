#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    printf("Programmer  : Muhammad Thayyib\n");
    printf("Nim         : 22343024\n");

    printf("Masukkan nilai x: ");
    scanf("%d", &x);
    printf("Masukkan nilai y: ");
    scanf("%d", &y);

    printf("\n\n");

    if (x > 0 && y >0)
    {
        printf("Kuadran 1\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Kuadran 2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Kuadran 3\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Kuadran 4\n");
    }
    else if (x==0 && y==0)
    {
        printf("Titik pusat\n");
    }

    return 0;
}