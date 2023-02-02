#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define N 3 //banyaknya barang

//deklarasi struct bernama BARANG
typedef struct BARANG{
	char nama[30]; //panjang nama barang adalah 30 karakter
	int harga; //harga barang
} BARANG;

//deklarasi fungsi yang akan digunakan
void judul();
void menu();
void bacaBarang();
void daftarBarang();
void infoBarang(int i);
void cariBarang();
int cariData(char namanya[]);
void lihatTermahal();
void lihatTeremurah();
void urutkan();
void rekapBarang();

//deklarasi variabel global berupa array of struct dari tipe BARANG sbb:
BARANG dataBarang[N]; //banyak barang adalah N buah

int main(){
	char jawab = 'Y';
	
	judul();
	do{
		menu();
		printf("\nKembali ke Menu Pilihan (Y/T)?: ");
		jawab = getche();
	}while(toupper(jawab)=='Y');
	printf("\nTerima kasih...");
	getch();
}

void judul(){
	printf("===================================================================\n");
	printf("Program Pengolahan Data Harga Barang\n");
	printf("Programmer: Muhammad Thayyib\n");
	printf("===================================================================\n");
	printf("Tekan tombol enter...");
	getch();
}

void menu(){
	int pilihan;
	
	printf("\nMENU PILIHAN\n");
	printf("===================================\n");
	printf("1. Entri Harga Barang\n");
	printf("2. Lihat Daftar Harga\n");
	printf("3. Cari Harga Barang Tertentu\n");
	printf("4. Lihat Barang Termahal\n");
	printf("5. Lihat Barang Teremurah\n");
	printf("6. Urutkan Daftar Harga\n");
	printf("7. Rekap Harga\n");
	printf("===================================\n");
	printf("Masukkan pilihan: ");
	scanf("%d", &pilihan);
	
	switch(pilihan){
		case 1:
			bacaBarang();
			break;
		case 2:
			daftarBarang();
			break;
		case 3:
			cariBarang();
			break;
		case 4:
			lihatTermahal();
			break;
		case 5:
			lihatTeremurah();
			break;
		case 6:
			urutkan();
			break;
		case 7:
			rekapBarang();
			break;
		default:
			printf("Pilihan tidak valid!\n");
			break;
	}
}

void bacaBarang(){
	int i;
	
	printf("\nEntri Harga Barang\n");
	printf("===================================\n");
	for(i=0; i<N; i++){
		printf("Nama barang ke-%d: ", i+1);
		scanf("%s", dataBarang[i].nama);
		printf("Harga barang ke-%d: Rp. ", i+1);
		scanf("%d", &dataBarang[i].harga);
	}
}

void daftarBarang(){
	int i;
	
	printf("\nDaftar Harga Barang\n");
	printf("===================================\n");
	for(i=0; i<N; i++){
		infoBarang(i);
	}
}

void infoBarang(int i){
	printf("Barang ke-%d: %s (Rp. %d)\n", i+1, dataBarang[i].nama, dataBarang[i].harga);
}

void cariBarang(){
	char namanya[30];
	int posisi;
	
	printf("\nCari Harga Barang Tertentu\n");
	printf("===================================\n");
	printf("Masukkan nama barang: ");
	scanf("%s", namanya);
	
	posisi = cariData(namanya);
	if(posisi>=0){
		printf("Harga barang tersebut: Rp. %d", dataBarang[posisi].harga);
	}
	else{
		printf("Barang tidak ditemukan");
	}
}

int cariData(char namanya[]){
	int i;
	
	for(i=0; i<N; i++){
		if(strcmp(namanya, dataBarang[i].nama)==0){
			return i;
		}
	}
	return -1;
}

void lihatTermahal(){
	int i, maks;
	
	printf("\nBarang Termahal\n");
	printf("===================================\n");
	
	maks = dataBarang[0].harga;
	for(i=1; i<N; i++){
		if(dataBarang[i].harga>maks){
			maks = dataBarang[i].harga;
		}
	}
	
	for(i=0; i<N; i++){
		if(dataBarang[i].harga==maks){
			infoBarang(i);
		}
	}
}

void lihatTeremurah(){
	int i, min;
	
	printf("\nBarang Teremurah\n");
	printf("===================================\n");
	
	min = dataBarang[0].harga;
	for(i=1; i<N; i++){
		if(dataBarang[i].harga<min){
			min = dataBarang[i].harga;
		}
	}
	
	for(i=0; i<N; i++){
		if(dataBarang[i].harga==min){
			infoBarang(i);
		}
	}
}
/* 
//bubble
void urutkan(){
	int i, j;
	BARANG temp;
	
	printf("\nUrutkan Daftar Harga\n");
	printf("===================================\n");
	
	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if(dataBarang[i].harga>dataBarang[j].harga){
				temp = dataBarang[i];
				dataBarang[i] = dataBarang[j];
				dataBarang[j] = temp;
			}
		}
	}
	
	daftarBarang();
}
*/

//selection
void urutkan(){
	int i, j, min_idx;
	BARANG temp;
	
	printf("\nUrutkan Daftar Harga\n");
	printf("===================================\n");
	
	for(i=0; i<N-1; i++){
		min_idx = i;
		for(j=i+1; j<N; j++){
			if(dataBarang[j].harga < dataBarang[min_idx].harga){
				min_idx = j;
			}
		}
		
		temp = dataBarang[min_idx];
		dataBarang[min_idx] = dataBarang[i];
		dataBarang[i] = temp;
	}
	
	daftarBarang();
}

void rekapBarang(){
	int i, jumlah=0;
	double rata;
	
	printf("\nRekap Harga\n");
	printf("===================================\n");
	
	for(i=0; i<N; i++){
		jumlah += dataBarang[i].harga;
	}
	
	rata = (double)jumlah/N;
	
	printf("Jumlah harga barang: Rp. %d\n", jumlah);
	printf("Rata-rata harga barang: Rp. %.2f\n", rata);
}