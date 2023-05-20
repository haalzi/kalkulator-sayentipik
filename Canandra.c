#include "Canandra.h"
#include "Rahaditya.h"

//--------------perkalian
double perkalian (double x, double y) {
	return x * y;
}

double sinus (double x) {
	x = (x * phi / 180.0);
    x = sin (x);
	return x;
}

double cosecan (double x) {
	x = (x * phi / 180.0);
    x = 1 / sin (x);
	return x;
}

//------------log basis 10
double logbase10 (double x) {
	return log (x) / 2.30258509299404568402;
}

double LN (double x) {
    double old_sum = 0.0;
    double xmlxpl = (x - 1) / (x + 1);
    double xmlxpl_2 = xmlxpl * xmlxpl;
    double denom = 1.0;
    double frac = xmlxpl;
    double term = frac;
    double sum = term;

    while ( sum != old_sum ) {
        old_sum = sum;
        denom += 2.0;
        frac *= xmlxpl_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}

//-------------------------diskriminan
double diskriminan (double x, double y, double z) {
	double Diskriminan, akar1, akar2, real, imajiner;
	
	Diskriminan = x*x - 4 * y * z;
	if (Diskriminan == 0) {
		akar1 = akar2 = -x/(2*y);
		tampilanStruktur (2);
		printf("akar1 = akar2 = %.2lf\n", akar1);
	}
	else if(Diskriminan > 0) {
		akar1 = (-x + sqrt(Diskriminan))/(2*y);
		akar2 = (-x - sqrt(Diskriminan))/(2*y);
		tampilanStruktur (2);
		printf("akar 1 = %.2lf dan akar 2 = %.lf\n", akar1, akar2);
	}
	else {
		real = -x/(2*y);
		imajiner = sqrt(-Diskriminan)/(2*z);
		tampilanStruktur (3);
		printf("akar 1 = %.2lf + %.2lfi dan akar 2 = %.2f-%.2fi\n", real, imajiner, real, imajiner);
	}
	
}

//--------------------------permutasi
double faktorialPermutasi(double x) {
	if (x==0 || x==1){
		return 1;
	}
	else{
		return x * faktorialPermutasi(x-1);
	}
}

double permutasi(double x, double y) {
	return faktorialPermutasi(x)/faktorialPermutasi(x-y);
}

double lingkaran(double x) {
	return phi*x*x;
}
