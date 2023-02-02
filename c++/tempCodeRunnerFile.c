/*
 mengelola data lomba membuat sumur untuk N peserta dan
 menentukan juara 1, 2 dan 3, seta informasi 3 peserta terburuk
 menggunakan menu
 (dari besar ke kecil)
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 4
#define PHI 3.14

typedef struct peserta{
 char nama[20];
 char noPeserta[4];
} PESERTA;

typedef struct sumur{
 double diameter;
 double tinggi;
 double volume;
} SUMUR;

typedef struct lomba{
 PESERTA psrt;
 SUMUR smr;
} LOMBA;

//deklarasi fungsi2
void judul();
void entriData(LOMBA lmb[]);
void entriLomba(LOMBA lmb[], LOMBA lom, int i);
void salin(LOMBA lmb[], LOMBA copy[]);
void tampilInfo(LOMBA lmb[]);
void urutkan(LOMBA lmb[]);
double hitVol(LOMBA lm);
void juara(LOMBA lmb[]);
void pecundang(LOMBA lmb[]);
void tampilkan(LOMBA lmb[], int i);
void menu(LOMBA lom1[], LOMBA lom2[]);
void cariData(LOMBA lmb[], int *pss, int *stat);

int main(){
 //deklarasi var lokal
 system("cls");
 LOMBA lmb1[N], lmb2[N];
 
 //entri data N peserta lomba, sekaligus hitung volume sumur
 entriData(lmb1);
 //salin semua data pada array ke array lain, misal lmb2[]
 salin(lmb1, lmb2);
 //urutkan data pada array lmb2
 urutkan(lmb2);
 //menu pilihan
 menu(lmb1, lmb2);
}

void judul(){
 printf("PROGRAM PENGELOLAAN HASIL LOMBA MEMBUAT SUMUR\n");
 printf("=============================================\n");
 printf("Programmer: Antu\n");
 //dst
}

void menu(LOMBA lom1[], LOMBA lom2[]){
 int pilihan, posisi, stat;
 char jawab;
 
 do{
  printf("\nMENU PILIHAN\n");
  printf("=========================\n");
  printf("1. Cari Data Tertentu\n");
  printf("2. Tampilkan Para Juara\n");
  printf("3. Tampilkan Para Pecundang\n");
  printf("4. Lihat Informasi\n");
  printf("0. Selesai\n");
  printf("=========================\n");
  printf("Ketikkan nomor pilihan (1, 2, 3, 4 atau 0): ");
  scanf("%d", &pilihan); fflush(stdin);
  
  switch(pilihan){
   case 0: printf("\nBye...bye...\n");
     exit(1);
   case 1: cariData(lom1, &posisi, &stat); 
     if(stat){
      printf("\nData yg ditemukan:\n");
      tampilkan(lom1, posisi);
     }
     break;
   case 2: juara(lom2); break;
   case 3: pecundang(lom2); break;
   case 4: tampilInfo(lom1); break;
   default: printf("\nNomor pilihan tidak ada... Tekan Enter");
     getch();
  }
  printf("\nMau ngulang lagi (Y/T): ");
  jawab = getche();
 } while(toupper(jawab)=='Y');
 printf("\nTerima kasih.... Tekan Enter...");
 getch();
}

void entriData(LOMBA lmb[]){
 int i;
 LOMBA lomba;
 PESERTA psrt;
 SUMUR smr;
 
 printf("\nEntri Data\n");
 printf("========================\n");
 for(i=0;i<N;i++){
  printf("Peserta ke-%d:\n", i+1);
  printf("Ketikkan nama : ");
  gets(lomba.psrt.nama); fflush(stdin);
  printf("Ketikkan nomor: ");
  gets(lomba.psrt.noPeserta); fflush(stdin);
  //entri data perlombaan
  printf("Ketikkan Diamater dan kedalaman sumur (pisahkan dengan spasi): ");
  scanf("%lf%lf", &lomba.smr.diameter, &lomba.smr.tinggi); fflush(stdin);
  lomba.smr.volume = hitVol(lomba);
  entriLomba(lmb, lomba, i);
 }
 printf("\nEntri Data selesai... Tekan Enter...");
 getch();
}

void entriLomba(LOMBA lmb[], LOMBA lom, int i){
 lmb[i] = lom;
 printf("\nNama: %s  Nomor: %s\n", lmb[i].psrt.nama, lmb[i].psrt.noPeserta);
 printf("--------------------------------------------\n");
 printf("Diameter: %0.2lf Meter\n", lmb[i].smr.diameter);
 printf("Kedalaman : %0.2lf Meter\n", lmb[i].smr.tinggi);
 printf("Volume    : %0.2lf Meter Kubik\n", lmb[i].smr.volume);
 printf("--------------------------------------------\n");
}

double hitVol(LOMBA lm){
 double vol;
 
 vol = lm.smr.diameter/2 * lm.smr.diameter/2 * lm.smr.tinggi * PHI;
 //atau gunakan fungsi fow() sbb:
 //vol = pow(lm.smr.diameter/2, 2) * PHI * lm.smr.tinggi;
 return vol;
}

void salin(LOMBA lmb[], LOMBA copy[]){
 int i;
 //salin satu persatu elemen array ke array lain
 for(i=0;i<N;i++){
  copy[i] = lmb[i];
 }
}

void tampilInfo(LOMBA lmb[]){
 int i;
 
 printf("\nData:\n");
 printf("--------------------------------------------\n");
 for(i=0;i<N;i++){
  printf("\nPeserta ke-%d\n", i+1);
  printf("\nNama: %s  Nomor: %s\n", lmb[i].psrt.nama, lmb[i].psrt.noPeserta);
  printf("Diameter : %0.2lf Meter\n", lmb[i].smr.diameter);
  printf("Kedalaman: %0.2lf Meter\n", lmb[i].smr.tinggi);
  printf("Volume   : %0.2lf Meter Kubik\n", lmb[i].smr.volume);
  printf("--------------------------------------------\n");
 }
}

void urutkan(LOMBA lmb[]){
 int i, j, posisi;
 double terbesar;
 LOMBA temp;
 
 for(i=0;i<N-1;i++){
  terbesar = lmb[i].smr.volume;
  posisi = i;
  for(j=i+1;j<N;j++){
   if(lmb[j].smr.volume > terbesar){
    terbesar = lmb[j].smr.volume;
    posisi = j;
   }
  }
  //pertukarkan isi array
  temp = lmb[i];
  lmb[i] = lmb[posisi];
  lmb[posisi] = temp;
 }
}

void juara(LOMBA lmb[]){
 int i;
 
 printf("\nPARA JUARA\n");
 printf("--------------------------\n");
 for(i=0;i<3;i++){
  printf("\nJuara ke-%d\n", i+1);
  tampilkan(lmb, i);
 }
 printf("\nTekan Enter...");
 getch();
}

void pecundang(LOMBA lmb[]){
 int i, j=1;
 
 printf("\nPARA PECUNDANG\n");
 printf("--------------------------\n");
 for(i=N-1;i>=N-3;i--){
  printf("\nPecundang ke-%d\n", j);
  tampilkan(lmb, i);
  j++;
 }
 printf("\nTekan Enter...");
 getch();
}

void tampilkan(LOMBA lmb[], int i){
 printf("--------------------------------------------\n");
 printf("\nNama: %s  Nomor: %s\n", lmb[i].psrt.nama, lmb[i].psrt.noPeserta);
 printf("Diameter : %0.2lf Meter\n", lmb[i].smr.diameter);
 printf("Kedalaman: %0.2lf Meter\n", lmb[i].smr.tinggi);
 printf("Volume   : %0.2lf Meter Kubik\n", lmb[i].smr.volume);
 printf("--------------------------------------------\n");
}

void cariData(LOMBA lmb[], int *pss, int *stat){
 char nomornya[4];
 int i;
 
 printf("\nKetikkan nomor peserta yg dicari: ");
 gets(nomornya); fflush(stdin);
 for(i=0;i<N;++i){
  if(!strcmp(lmb[i].psrt.noPeserta, nomornya)){
   *stat = 1;
   *pss = i;
   break;
  }
  else *stat = 0;
 }
 if(*stat) printf("\nData ditemukan...\n");
 else printf("\nData tidak fitemukan...\n");
}