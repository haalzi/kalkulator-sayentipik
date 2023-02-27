#include "Rahaditya.h"

//--------------perkalian
float perkalian (float x, float y) {
	return x * y;
}

float sinus (float x) {
	x = (x * phi / 180.0);
    x = sin (x);
	return x;
}

float cosecan (float x) {
	x = (x * phi / 180.0);
    x = 1 / sin (x);
	return x;
}

//------------log basis 10
float logbase10 (float x) {
	return LN(x) / LN10;
}

float LN (float x) {
    float old_sum = 0.0;
    float xmlxpl = (x - 1) / (x + 1);
    float xmlxpl_2 = xmlxpl * xmlxpl;
    float denom = 1.0;
    float frac = xmlxpl;
    float term = frac;
    float sum = term;

    while ( sum != old_sum ) {
        old_sum = sum;
        denom += 2.0;
        frac *= xmlxpl_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}

//-------------------------diskriminan
float diskriminan (float x, float y, float z) {
	float Diskriminan, akar1, akar2, real, imajiner;
	
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
float faktorialPermutasi(float x) {
	if (x==0 || x==1){
		return 1;
	}
	else{
		return x * faktorialPermutasi(x-1);
	}
}

float permutasi(float x, float y) {
	return faktorialPermutasi(x)/faktorialPermutasi(x-y);
}

float lingkaran(float x) {
	return phi*x*x;
}
