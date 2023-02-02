/*
	Nama File: search2.c
	implementasi fungsi pencarian tunggal tanpa nilai balik
	dgn parameter pass by value
*/

#include <stdio.h>

#define N 7

void cari(int data);
void input();

int nilai[N];

int main(){
	int data;
	input();

	printf("\nKetikkan Data yg akan dicari: ");
	scanf("%d", &data); fflush(stdin);
	
	cari(data);
}

void input(){
    for (int i = 0; i < N; i++)
    {
        printf("Masukkan data ke-%d: ", i+1);
		scanf("%d", &nilai[i]);
    }
}

void cari(int data){
	int i, status, posisi;
	
	for(i=0;i<N;++i){
		if(nilai[i] == data){
			status = 1;
			posisi = i;
			break;
		}
		else status = 0;
	}
	if(status) printf("Data ditemukan pada posisi: %d", posisi);
	else printf("Data tidak ditemukan\n");
}
