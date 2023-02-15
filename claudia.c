#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "claudia.h"

float pengurangan(float a,float b){

	return a-b;
}
 
float cos (float a,float b){

 printf ("cos(%.2lg) = %.2lg\n", a, cos(a));
     
    return 0;
}

float ln(float a,float b){
        float hasil;
        hasil=log(a);
        printf("ln(%1g)=%1g\n",a,hasil);
    return 0;
}

int matriks (int baris, int kolom){
	int i, j,matrik1[10][10], matrik2[10][10],jumlah[10][10];
printf("\nHasil Penjumlahan Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n"); 
    }
       printf("\nHasil Pengurangan Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] - matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");
        }
      printf("\nHasil Perkalian Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] * matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");
   }
       printf("\nHasil Pembagian Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");
    }
    return 0;
}

int invers(int i,int j){
	int c[5][5];
    int x,y,det,hasil;
	for (i=0;i<2;i++){
 	for (j=0;j<2;j++){
 		printf("masukkan elemen [%d] [%d ]: ",i+1,j+1);
        scanf("%d",&c[i][j]);
	 }
 }
 printf("Matriks A: \n");
 for (i=0; i< 2; i++){
    for (j=0; j<2; j++){
     printf("%3d", c[i][j]);
    }
    printf("\n");
}
det = (c[1][1]*c[2][2]-c[2][1]*c[1][2]);
while(hasil !=0)
 hasil = 1/det;

  c[1][1] = hasil*c[2][2];
  c[1][2] = hasil*c[2][1];
  c[2][1] = hasil*c[1][2];
  c[1][2] = hasil*c[1][1];


  printf("invers matriks: \n");
   for (i=0; i< 2; i++){
      for (j=0; j<2; j++){
     printf("%3d", c[i][j]);
     }
     printf("\n");
	}
  
    return 0;
}

    



