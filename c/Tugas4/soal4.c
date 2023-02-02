#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, D;
    double x1, x2;

    printf("Programmer  : Muhammad Thayyib\n");
    printf("Nim         : 22343024\n");

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    printf("Masukkan nilai c: ");
    scanf("%d", &c);

    printf("\n\n");

    D = (b * b) - (4 * a * c);

    if (D < 0)
    {
        printf("Akar-akar persamaan kuadrat imajiner\n");
    }
    else if (D > 0)
    {
        x1 = (-b + (sqrt(D)) / (2 * a));
        x2 = (-b - (sqrt(D)) / (2 * a));
        printf("Nilai x1: %.2lf\n", x1);
        printf("Nilai x2: %.2lf\n", x2);
    }
    else if (D == 0)
    {
        x1 = (-b) / (2 * a);
        x2 = x1;
        printf("Akar-akar persamaan kuadrat kembar\n");
        printf("Nilai x1: %.2lf\n", x1);
        printf("Nilai x2: %.2lf\n", x2);
    }

    return 0;
}