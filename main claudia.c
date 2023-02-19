#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "claudia.h"

    
int main(){

	//pengurangan
	float a, b,hasil;
    printf("Masukkan angka pertama: ");
    scanf("%g", &a);
    printf("masukan angka kedua: ");
    scanf("%g",&b);
     
     hasil=a-b;
     printf(" %g - %g= %g\n",a,b,hasil);
     

     
	  //logaritma natural
      printf("masukan angka pertama: ");
      scanf("%g",&a);
      printf("masukan angka kedua: ");
      scanf("%g",&b);
        hasil=log(a);
        printf("ln(%1g)=%1g\n",a,hasil);
     
	
	 //matriks   
  int baris, kolom, i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];
 
   printf("Input jumlah baris matrik : "); 
   scanf("%d", &baris);
   printf("Input jumlah kolom matrik : ");
    scanf("%d", &kolom);
   
   printf("nInput nilai matrik 1 : \n");
   for (i = 0; i < baris; i++){
      for (j = 0; j < kolom; j++){
      printf("Input Matriks 1[%d][%d]: ",i+1,j+1);
  scanf("%d",&matrik1[i][j]);
      }
   }
   
   printf("\n Matrik 1 : \n");
   for (i=0; i< baris; i++){
    for (j=0; j<kolom; j++){
     printf("%3d", matrik1[i][j]);
    }
    printf("\n");
   }printf("\nInput nilai matrik 2 :\n");
   for (i = 0; i < baris; i++){    
      for (j = 0 ; j < kolom; j++){
    printf("Input Matriks 2[%d][%d]: ",i+1,j+1);
  scanf("%d",&matrik2[i][j]);
      }
   }
   
   printf("\n Matrik 2 : \n");
   for (i=0; i< baris; i++){
    for (j=0; j<kolom; j++){
     printf("%3d", matrik2[i][j]);
    }
    printf("\n");
   }
    
   
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
    
 
    //invers
 int c[5][5];
 int x,y,det;

 printf("masukkan jumlah baris  matriks : ");
 scanf("%d",&x);
 printf("masukkan jumlah kolom matriks : ");
 scanf("%d",&y); 

 for (i=0;i<x;i++){
 	for (j=0;j<y;j++){
 		printf("masukkan elemen [%d] [%d ]: ",i+1,j+1);
        scanf("%d",&c[i][j]);
	 }
 }
 printf("Matriks A: \n");
 for (i=0; i< x; i++){
    for (j=0; j<y; j++){
     printf("%3d", c[i][j]);
    }
    printf("\n");
}
det = (c[1][1]*c[2][2]-c[2][1]*c[1][2]);
while(hasil !=0)
 hasil = 1/det;


  printf("invers matriks \n");
   for (i=0; i< x; i++){
      for (j=0; j<y; j++){
     printf("%3d", c[i][j]);
     }
     printf("\n");
	}
  
	
      //cosinus
     float PI= 3.141;
     printf("masukan angka pertama :");
     scanf("%f",&a);
     printf("cos( %.2lg ) = %lf\n", a, cos( (a * PI) / 180 ));
    
    
    //secan
	 printf("masukan angka pertama :");
     scanf("%f",&a);
     printf("sec( %.2lg ) = %lf \n", a, 1/cos((a * PI) / 180 ));
   
	
    return 0;
}
    
