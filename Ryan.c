#include "ryan.h"

float pangkat(float x, float y)
{
	float hasil;							
	hasil = pow(x, y);     	
	return hasil;
}

float akar(float x)
{
	float hasil;
	hasil = sqrt(x);				
	return hasil;
} 

float tambah (float x, float y){
	
	return x+y;
}

int modulus(int x, int y){
	int hasil;
	hasil = x % y;
	return hasil;
}

float kombinasi(float x, float y){
	float hasil, i, x1, x2, x3;
	x1 = 1;
	x2 = 1;
	x3 = 1;

	for(i=1; i<=x; i++){
        x1 = x1*i;
    }
    
	for(i=1; i<=y; i++){
        x2 = x2*i;
    }
    
	for(i=1; i<=x-y; i++){
        x3 = x3*i;
	}
	
	hasil = x1/(x2*x3);
	
	return hasil;
}

float convertCelsiuskeFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}

float convertFahrenheitkeCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

float convertCelsiuskeReamur(float celsius) {
    return celsius * 0.8;
}

float convertReamurkeCelsius(float reamur) {
    return reamur / 0.8;
}

float convertCelsiuskeKelvin(float celsius) {
    return celsius + 273.15;
}

float convertKelvinkeCelsius(float kelvin) {
    return kelvin - 273.15;
}

float convertFahrenheitkeKelvin(float fahrenheit) {
    return (fahrenheit + 459.67) / 1.8;
}

float convertKelvinkeFahrenheit(float kelvin) {
    return (kelvin * 1.8) - 459.67;
}

float convertReamurkeKelvin(float reamur) {
    return (reamur / 0.8) + 273.15;
}

float convertKelvinkeReamur(float kelvin) {
    return (kelvin - 273.15) * 0.8;
}

/*
// print matriks
void printmatriks(float **matriks, int baris, int kolom) {
    int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%f\t", matriks[i][j]);
        }
        printf("\n");
    }
}

// transpose matriks
float **transposematriks(float **matriks, int baris, int kolom) {
    float **transpose = (float **)malloc(kolom * sizeof(float *));
    for (int i = 0; i < kolom; i++) {
        transpose[i] = (float *)malloc(baris * sizeof(float));
    }
    
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < baris; j++) {
            transpose[i][j] = matriks[j][i];
        }
    }

    return transpose;
} */

// Function to print a matrix
void printMatrix(float **matrix, int rows, int columns) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to transpose a matrix
float **transposeMatrix(float **matrix, int rows, int columns) {
    // Allocate memory for the transpose matrix
    float **transpose = (float **)malloc(columns * sizeof(float *));
    for (int i = 0; i < columns; i++) {
        transpose[i] = (float *)malloc(rows * sizeof(float));
    }

    // Transpose the matrix
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    return transpose;
}

// berfungsi untuk mengubah panjang dari satu satuan ke satuan lainnya
double ConvertPanjang(double Panjang, double fromFactor, double toFactor) {
    return Panjang * fromFactor / toFactor;
}



