#include "Hafidzon.h"
#include "Rahaditya.h"

double pembagian(double x, double y) {
	return x / y;
}
double eksponen(double x,int y) {
	double pow = 1;
	int i;
	for (i = 1; i <= y; i++) {
		pow = pow * x;
	}
	return pow;
}
double faktorial(double x) {
	double fact = 1;
	int i;
	for (i = 1; i <= x; i++) {
		fact = fact * i;
	}
	return fact;
}

double tangen(double x) {
	x = (x * phi / 180.0);
	return (sinuss(x)/cosinuss(x));
}

double cotangen(double x){
	return (1/tangen(x));
}

double power(double base, int exp) {
	if(exp < 0) {
		if(base == 0)
			return -0;
		return 1 / (base * power(base, (-exp) - 1));
	}
	if(exp == 0)
		return 1;
	if(exp == 1)
		return base;
	return base * power(base, exp - 1);
}

int facttan(int n) {
	return n <= 0 ? 1 : n * facttan(n-1);
}

double sinuss(double deg) {
	double sin = 0;

	int i;
	for(i = 0; i <= 10; i++) {
		sin = sin + (power(-1, i) * power(deg, 2 * i + 1) / facttan(2 * i + 1));
	}
	return sin;
}

double cosinuss(double deg) {
	double cos = 0;

	int i;
	for(i = 0; i <= 10; i++) {
		cos = cos + (power(-1, i) * power(deg, 2 * i) / facttan(2 * i));
	}
	return cos;
}
double mutlak (double x) {
	return (x < 0) ? -x : x;
}
