#include "Rahaditya.h"

float operasi (float angkaPertama, float angkaKedua, char operatorKalkulasi) {
//	float hasilKalkulasi;
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
//	return hasilKalkulasi;
}

void inputOperator (char * operatorKalkulasi) {
	printf ("Operasi yang dilakukan : ");
	printf ("(+ - * /)");
	scanf(" %s", &*operatorKalkulasi);fflush(stdin);
}
