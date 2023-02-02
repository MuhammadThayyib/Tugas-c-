/*
	Nama File: search6.c
	implementasi fungsi pencarian jamak tanpa nilai balik
	dgn parameter pass by value dan pass by ref
*/

#include <stdio.h>

#define N 7

void cari(int nl[], int data);
void input(int nl[]);

main(){
	int data;
	int nilai[N];

	input(nilai);
	
	printf("\nKetikkan Data yg akan dicari: ");
	scanf("%d", &data); fflush(stdin);
	
	//cari data ini di kedua array
	printf("\nHasil pencarian di array nilai[]\n");
	cari(nilai, data);

}

void input(int n1[]){
    for (int i = 0; i < N; i++)
    {
        printf("Masukkan data ke-%d: ", i+1);
		scanf("%d", &n1[i]);
    }
}

void cari(int nl[], int data){
	int i, status, posisi, konter = 0;
	
	for(i=0;i<N;++i){
		if(nl[i] == data){
			printf("posisi: %d\n", i);
			konter++;
		}
	}
	printf("\nData yg ditemukan ada %d buah", konter);
}
