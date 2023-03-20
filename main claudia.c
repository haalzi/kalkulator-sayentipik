
#include <stdlib.h>
#include "claudia.h"
   
int main(){
	float a, b,hasil;
   
	 
	//pengurangan
	
    printf("Masukkan angka pertama: ");
    scanf("%g", &a);
    printf("masukan angka kedua: ");
    scanf("%g",&b);
     
     hasil=a-b;
     printf(" %g - %g= %g\n",a,b,hasil);
     
     
	  //logaritma natural
    double x ;
   printf("Masukkan nilai Logaritma natural:");
   scanf("%lf",&x);
    double result = ln(x);
    printf("ln(%g) = %g\n", x, result);
    
	 //matriks pertambahan  
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
    
    //matriks pengurangan 
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
       printf("\nHasil Pengurangan Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] - matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");
        }
        
//matriks perkalian
 
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
    
      printf("\nHasil Perkalian Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] * matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");
   }
   
    
   //matriks pembagian
 
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
    
       printf("\nHasil Pembagian Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");
    }
  

    //invers 

    double bilangan, invers;

    printf("Masukkan bilangan: ");
    scanf("%lf", &bilangan);

    invers = 1.0 / bilangan;

    printf("Invers (%g) adalah %lf\n", bilangan, invers);

	 //cosinus
    double degrees;
    printf("Masukkan nilai sudut  cosin dalam derajat: ");
    scanf("%lf", &degrees);
    double cos_val = cosine(degrees);
    printf("Cosine dari (%.2lf) adalah %.1f", degrees, cos_val);
    
   //secan
     double degrees1;
    printf("\nMasukkan nilai sudut secan dalam derajat: ");
    scanf("%lf", &degrees1);
     double cos_val1 = secan(degrees1);
    printf("secan dari (%.2lf) adalah %.1f", degrees1, cos_val1);
    
    return 0;
}

	
    
