#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "claudia.h"
#include <stdio.h>


float pengurangan(float a,float b){

	return a-b;
}
 
//modul logaritma natural
double pangkat(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

double ln(double x) {
    double epsilon = 0.00000001;
    double result = 0.0;
    double numerator = x - 1;
    double denominator = 1.0;
    int i = 1;
    while (numerator / denominator > epsilon) {
        result += numerator / denominator;
        numerator = -numerator * (x - 1);
        denominator = ++i;
    }
    return result;
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

double invers(double bilangan, double invers){

    printf("Masukkan bilangan: ");
    scanf("%lf", &bilangan);

    invers = 1.0 / bilangan;

    return bilangan, invers;
}

//  moduL cosinus
double to_radians(double degrees) {
    return degrees * 0.0174533;
}

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

double factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double cosine(double degrees) {
    double radians = to_radians(degrees);
    double cos = 1.0;
    int sign = -1;
    double term;
    for (int i = 2; i <= 20; i += 2) {
        term = power(radians, i) / factorial(i);
        cos += sign * term;
        sign = -sign;
    }
    return cos;
}

// modul secan
double to_radians1(double degrees) {
    return degrees * 0.0174533;
}

double power1(double base, int exponent) {
    double result = 1.0;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

double factorial1(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial1(n - 1);
    }
}

double secan(double degrees1) {
    double radians = to_radians1(degrees1);
    double cos = 1.0;
    int sign = -1;
    double term;
    for (int i = 2; i <= 20; i += 2) {
        term = power1(radians, i) / factorial1(i);
        cos += sign * term;
        sign = -sign;
    }
    return 1/cos;
}