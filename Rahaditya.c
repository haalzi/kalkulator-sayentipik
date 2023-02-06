#include "Rahaditya.h"

void operasi (float angkaPertama, float angkaKedua, float hasilKalkulasi) {
	char operatorKalkulasi;
	printf ("Operasi yang dilakukan : ", angkaPertama);
	printf("(+ - * /)");
	scanf ("%s", &operatorKalkulasi);
	
	switch(operatorKalkulasi) {
		case '+' :
			hasilKalkulasi = tambah (angkaPertama, angkaKedua);
			break;
		case '-' :
			hasilKalkulasi = pengurangan (angkaPertama, angkaKedua);
			break;
		case '*' :
			hasilKalkulasi = perkalian (angkaPertama, angkaKedua);
			break;
		case '/' :
			hasilKalkulasi = bagi (angkaPertama, angkaKedua);
			break;
		default :
			printf ("Anda salah memasukkan");
			break;
	}	
	printf ("%g", hasilKalkulasi);
}

