#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "claudia.h"
#include <stdio.h>


float pengurangan(float a,float b){

	return a-b;
}
 

float ln(float a,float b){
        float hasil;
        hasil=log(a);
        printf("ln(%1g)=%1g\n",a,hasil);
    return 0;
}

int  matrikspenjumlahan (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];

       printf("\nHasil Penjumlahan Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n"); 
    }
    return 0;
}
int  matrikspengurangan  (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];
       printf("\nHasil Pengurangan Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] - matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");
        }
    return 0;
    }
int  matriksperkalian  (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];
      printf("\nHasil Perkalian Matrik :\n");
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] * matrik2[i][j];
         printf("%d\t", jumlah[i][j]);}
         printf("\n");

   }
      return 0;
}
int  matrikspembagian (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];
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
	int c[5][5]={1,2,3,4,5,6,7,8,9};
	 int x,y,det;
printf("Matriks A: \n");
 for (i=0; i< 2; i++){
    for (j=0; j<2; j++){
     printf("%3d", c[i][j]);
    }
    printf("\n");
}
det=c[0][0]*c[1][1]-c[1][0]*c[0][1];
int A2[2][2];
A2[1][1]=c[0][0];
A2[0][0]=c[1][1];
A2[0][1]=c[0][1]*-1;
A2[1][0]=c[1][0]*-1;
A2[1][1]=c[0][0];
A2[0][0]=c[1][1];
A2[0][1]=c[0][1]*-1;
A2[1][0]=c[1][0]*-1;

printf("Invres: \n");
for (i=0; i< 2; i++){
    for (j=0; j<2; j++){
     
     printf("%3d",  A2[i][j]/det);
    }
    printf("\n");
  
    
}
return 0;
}

float cos (float a,float b)
{
     
	 float PI= 3.141;
    printf("cos( %.2lg ) = %lf\n", a, cos( (a * PI) / 180 ));
    

return 0;
}

float secan (float a,float b){
	float PI= 3.141;
 
  printf("sec( %.2lg ) = %lf \n", a, 1/cos((a * PI) / 180 ));
	 
	 return 0;
}





