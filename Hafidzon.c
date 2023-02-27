#include "Rahaditya.h"

float pembagian(float x, float y) {
	return x / y;
}

float eksponen (float x, int y) {
	return pow(x, y);
}

float faktorial (float x) {
	int y;
	float fact = 1;
    for (y = 1; y <= x; y++) {
    	fact = fact * y; 
	}
	return fact;
}

float tangen (float x) {
	x = (x * phi / 180.0);
    x = tan (x);
	return x;
}

float cotangen (float x) {
	x = (x * phi / 180.0);
    x = 1 / tan (x);
	return x;
}

float mutlak (float x) {
	return abs (x);
}
