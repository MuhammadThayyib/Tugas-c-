#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, x2, y1, y2;
    float p, q;
    printf("Menentukan titik koordinat tengah (titik o)  dari suatu garis pq\n");
    printf("garis p: \n");
    printf("titik x1: ");
    scanf("%d", &x1);
    printf("titik y1: ");
    scanf("%d", &y1);

    printf("\n");
    printf("garis q: \n");
    printf("titik x2: ");
    scanf("%d", &x2);
    printf("titik y2: ");
    scanf("%d", &y2);
    printf("\n");

    //rumus
    p = (x1 + x2) / 2;
    q = (y1 + y2) / 2;

    printf("titik p: %d,%d\n", x1, y1);
    printf("titik q: %d,%d\n", x2, y2);
    printf("titik o: %.1f,%.1f\n", p, q);
    return 0;
}