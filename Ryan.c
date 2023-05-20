#include "Ryan.h"
#include "Rahaditya.h"

double pertambahan (double x, double y) {
	
	return x + y;
}

//double perpangkatan(double base, int exponent) {
//    double result = 1.0;
//    int i;
//    for (i = 1; i <= exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//double nthRoot(double num, int n) {
//    double x = num;
//    double y = 0.000001; // epsilon
//    while ((perpangkatan(x, n) - num) > y) {
//        x = (1.0/n)*((n-1)*x + num/perpangkatan(x, n-1));
//    }
//    return x;
//}


double perpangkatan (double x, double y) {
	double hasil;							
	hasil = pow (x, y);     	
	return hasil;
}

double akar (double x, double y) {
	double hasil;
	hasil = pow(x, 1.0/y);			
	return hasil;
}
int modulus (int x, int y){
	int hasil;
	hasil = x % y;
	return hasil;
}

double persen (double x) {
	double hasil;
	hasil = x / 100;
	return hasil;
}

double kombinasi (double x, double y) {
	double hasil, i, x1, x2, x3;
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

double convertCelsiuskeFahrenheit(double celsius) {
    return (celsius * 1.8) + 32;
}

double convertFahrenheitkeCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

double convertCelsiuskeReamur(double celsius) {
    return celsius * 0.8;
}

double convertReamurkeCelsius(double reamur) {
    return reamur / 0.8;
}

double convertCelsiuskeKelvin(double celsius) {
    return celsius + 273.15;
}

double convertKelvinkeCelsius(double kelvin) {
    return kelvin - 273.15;
}

double convertFahrenheitkeKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) / 1.8;
}

double convertKelvinkeFahrenheit(double kelvin) {
    return (kelvin * 1.8) - 459.67;
}

double convertReamurkeKelvin(double reamur) {
    return (reamur / 0.8) + 273.15;
}

double convertKelvinkeReamur(double kelvin) {
    return (kelvin - 273.15) * 0.8;
}

// convert panjang
double ConvertPanjang(double Panjang, double fromFactor, double toFactor) {
    return Panjang * fromFactor / toFactor;
}

void printMatrix(double **matrix, int rows, int columns) {
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
double **transposeMatrix(double **matrix, int rows, int columns) {
	int i, j;
    // Allocate memory for the transpose matrix
    double **transpose = (double **)malloc(columns * sizeof(double *));
    for (i = 0; i < columns; i++) {
        transpose[i] = (double *)malloc(rows * sizeof(double));
    }

    // Transpose the matrix
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    return transpose;
}
