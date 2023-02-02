/*
	Nama File: search5.c
	implementasi fungsi pencarian tunggal dgn nilai balik
	dgn parameter pass by value dan pass by ref
*/

#include <stdio.h>

#define N 7

int cari(int nl[], int data);//nilai balik berupa posisi di array
void input(int nl[]);

main(){
	int data, pss;
	int nilai[] = {75, 50, 65, 50, 20, 76, 80};

	input(nilai);
	
	printf("\nKetikkan Data yg akan dicari: ");
	scanf("%d", &data); fflush(stdin);
	
	//cari data ini di kedua array
	printf("\nHasil pencarian di array nilai[]\n");
	pss = cari(nilai, data);

	//cek nilai pps, jika bukan -1, berarti data ditemukan
	if(pss!= -1) printf("\nData ditemukan pada posisi: %d\n", pss);
	else printf("data tidak ditemukan...");
}

void input(int n1[]){
    for (int i = 0; i < N; i++)
    {
        printf("Masukkan data ke-%d: ", i+1);
		scanf("%d", &n1[i]);
    }
}

int cari(int nl[], int data){
	int i, status, posisi;
	
	for(i=0;i<N;++i){
		if(nl[i] == data){
			status = 1;
			posisi = i;
			break;
		}
		else status = 0;
	}
	if(status) return posisi;
	else return -1;
}
