#include "Hafidzon.h"
#include "Rahaditya.h"

double pembagian(double x, double y) {
	return x / y;
}

double eksponen (double x, int y) {
	return pow(x, y);
}

double faktorial (double x) {
	int y;
	double fact = 1;
    for (y = 1; y <= x; y++) {
    	fact = fact * y; 
	}
	return fact;
}

double tangen (double x) {
	x = (x * phi / 180.0);
    x = tan (x);
	return x;
}

double cotangen (double x) {
	x = (x * phi / 180.0);
    x = 1 / tan (x);
	return x;
}

double mutlak (double x) {
	return (x < 0) ? -x : x;
}

double sinusS(double x) {
	x = (x * 3.14159265358979323846 / 180.0);
    double term = x, sum = 0.0;
    int i;
    for (i = 1; i <= 10; i++) {
        sum += term;
        term *= (-1) * x * x / ((2 * i) * (2 * i + 1));
    }
    return sum;
}
