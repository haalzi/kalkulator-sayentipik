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
        
    return a,hasil;
}

int  matrikspenjumlahan (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];

       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
    }
    }
    return jumlah[i][j];
}
int  matrikspengurangan  (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];
      
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] - matrik2[i][j];
        }
    }
    return jumlah[i][j];
    }
int  matriksperkalian  (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];
      
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] * matrik2[i][j];
        }

   }
      return jumlah[i][j];
}
int  matrikspembagian (int baris, int kolom){
    int i, j, matrik1[10][10], matrik2[10][10],jumlah[10][10];
       
       for (i = 0; i < baris; i++) {
       for (j = 0 ; j < kolom; j++) {
         jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
        }
    }
    return jumlah[i][j];
}

int invers(int i,int j){
 int c[2][2]={1,2,3,4};
 int x,y,det; 
 
 for (i=0; i< 2; i++){
    for (j=0; j<2; j++){
    }
    return c[i][j];
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


for (i=0; i< 2; i++){
    for (j=0; j<2; j++){
     
    }
    
}
return A2[i][j]/det;
}


float cos (float a,float b)
{ 
	  float PI= 3.141;

     return a, cos (a * PI) / 180;
	 
}               

float secan (float a,float b){
	float PI= 3.141;
	 
	 return a, 1/cos(a * PI) / 180;
}
         




