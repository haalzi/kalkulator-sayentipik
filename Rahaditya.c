#include "Rahaditya.h"

float operasi (float angkaPertama, float angkaKedua, char operatorKalkulasi) {
	switch(operatorKalkulasi) {
		case '+' :
			return tambah (angkaPertama, angkaKedua);
			break;
		case '-' :
			return pengurangan (angkaPertama, angkaKedua);
			break;
		case '*' :
			return perkalian (angkaPertama, angkaKedua);
			break;
		case '/' :
			return bagi (angkaPertama, angkaKedua);
			break;
		default :
			return 0;
			break;
	}
}

void inputKarakter (char * karakter) {
	printf ("\nInput : ");
	scanf(" %s", &*karakter);fflush(stdin);
}

void inputAngka (float * angka) {
	printf ("\nInput : ");
	scanf(" %g", &*angka);fflush(stdin);
}
