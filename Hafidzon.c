#include "Hafidzon.h"
#define pi 3.14159265358979323846

float bagi(double x, double y) {
	return (float)x/y;
}

float exponen(double x,int y) {
	double pow = 1;
	int i;
	for (i = 1; i <= y; i++) {
		pow *= x;
	}
	return pow;
}

float fact(float n) {
	int x;
	float fact = 1;
	for(x=1; x<=n; x++) {
		fact=fact*x;
	}
	return fact;
}

double tangen(double x) {
	return (sinus(x)/cosinus(x));

}

double sinus(double x) {
	x = (x * 3.14159265358979323846 / 180.0);
    double term = x, sum = 0.0;
    int i;
    for (i = 1; i <= 10; i++) {
        sum += term;
        term *= (-1) * x * x / ((2 * i) * (2 * i + 1));
    }
    return sum;
}

double cosinus(double x) {
	x = (x * 3.14159265358979323846 / 180.0);
	double sum = 1.0;
	double term = 1.0;
	int i, j;

	for (i = 1; i <= 10; i++) {
		term *= (-1.0 * x * x) / ((2 * i - 1) * (2 * i));
		sum += term;
	}

	return sum;
}

float mutlak(float x) {
	return abs(x);
}