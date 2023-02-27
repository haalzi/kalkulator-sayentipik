#include "Rahaditya.h"

float pertambahan (float x, float y) {
	
	return x + y;
}

float perpangkatan (float x, float y) {
	float hasil;							
	hasil = pow (x, y);     	
	return hasil;
}

float akar (float x) {
	float hasil;
	hasil = sqrt (x);				
	return hasil;
}

int modulus (int x, int y){
	int hasil;
	hasil = x % y;
	return hasil;
}

float persen (float x) {
	float hasil;
	hasil = x / 100;
	return hasil;
}

float kombinasi (float x, float y) {
	float hasil, i, x1, x2, x3;
	x1 = 1;
	x2 = 1;
	x3 = 1;

	for (i = 1; i <= x; i++){
        x1 = x1 * i;
    }
    
	for (i = 1; i <= y; i++){
        x2 = x2 * i;
    }
    
	for (i = 1; i <= x - y; i++){
        x3 = x3 * i;
	}
	
	hasil = x1 / (x2 * x3);
	
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

// convert panjang
float ConvertPanjang(float Panjang, float fromFactor, float toFactor) {
    return Panjang * fromFactor / toFactor;
}

void printMatrix(float **matrix, int rows, int columns) {
    int i, j;
    for (i = 0; i < rows; i++) {
		tampilanStruktur (2);
        for (j = 0; j < columns; j++) {
            printf("%g\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to transpose a matrix
float **transposeMatrix(float **matrix, int rows, int columns) {
	int i, j;
    // Allocate memory for the transpose matrix
    float **transpose = (float **)malloc(columns * sizeof(float *));
    for (i = 0; i < columns; i++) {
        transpose[i] = (float *)malloc(rows * sizeof(float));
    }

    // Transpose the matrix
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    return transpose;
}
