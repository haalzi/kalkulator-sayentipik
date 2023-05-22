#include "Hafidzon.h"

double bagi(double x, double y) {
	return x/y;
}

double exponen(double x,int y) {
	//Initial State	: x yang akan di eksponenkan dan y berapa kali eksponen dilakukan
	//Final State	: pow sebagai hasil eksponen angka sebanyak y dikembalikan
	//Referensi		: -
	//Kontributor	: -
	double pow = 1;
	int i;
	for (i = 1; i <= y; i++) {
		pow = pow * x;
	}
	return pow;
}

double fact(double x) {
	//Initial State	: x bilangan yang akan difaktorialkan
	//Final State	: fact dikembalikan sebagai hasil faktorial x
	//Referensi		: -
	//Kontributor	: -
	double fact = 1;
	int i;
	for (i = 1; i <= x; i++) {
		fact = fact * i;
	}
	return fact;
}

double tangen(double x) {
	//Initial State	: x bilangan yang akan di tangenkan
	//Final State	: karena tangen merupakan sin/cos maka dikembalikan
	//Referensi		: -
	//Kontributor	: -
	x = (x * pi / 180.0);
	return (sinus(x)/cosinus(x));
}

double power(double base, int exp) {
	//Initial State	: base bilangan yang akan di pangkatkan dan exp pangkat dari base
	//Final State	: mengembalikan nilai hasil perpangkatan
	//Referensi		: https://stackoverflow.com/questions/38917692/sin-cos-funcs-without-math-h
	//Kontributor	: -
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
	return n <= 0 ? 1 : n * fact(n-1);
}

double sinus(double deg) {
	//Initial State	: deg adalah derajat yang akan diubah ke dalam sinus
	//Final State	: sin dikembalikan sebagai hasil perhitungan sinus
	//Referensi		: https://stackoverflow.com/questions/38917692/sin-cos-funcs-without-math-h
	//Kontributor	: -
	double sin = 0;

	int i;
	for(i = 0; i <= 10; i++) {
		sin = sin + (power(-1, i) * power(deg, 2 * i + 1) / facttan(2 * i + 1));
	}
	return sin;
}

double cosinus(double deg) {
	//Initial State	: deg adalah derajat yang akan diubah ke dalam cosinus
	//Final State	: cos dikembalikan sebagai hasil perhitungan cosinus
	//Referensi		: https://stackoverflow.com/questions/38917692/sin-cos-funcs-without-math-h
	//Kontributor	: -
	double cos = 0;

	int i;
	for(i = 0; i <= 10; i++) {
		cos = cos + (power(-1, i) * power(deg, 2 * i) / facttan(2 * i));
	}
	return cos;
}

double mutlak(double x) {
	//Initial State	: Angka
	//Final State	:
	//Referensi		:
	//Kontributor	:
	if (x < 0) {
		return -x;
	}
}