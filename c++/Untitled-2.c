/*
	Nama File: search3.c
	implementasi fungsi pencarian tunggal tanpa nilai balik
	dgn parameter pass by value dan pass by ref
*/

#include <stdio.h>

#define N 7

void cari(int nl[], int data);
void input();

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
	int i, status, posisi;
	
	for(i=0;i<N;++i){
		if(nl[i] == data){
			status = 1;
			posisi = i;
			break;
		}
		else status = 0;
	}
	if(status) printf("Data ditemukan pada posisi: %d", posisi);
	else printf("Data tidak ditemukan\n");
}
