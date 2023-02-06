#include "Rahaditya.h"

int main () {
	
	float angkaPertama, angkaKedua, hasilKalkulasi;
	char operatorKalkulasi;
	
	for (;;) {
		printf ("Masukkan angka yang pertama :");
		scanf ("%g", &angkaPertama);
		printf ("Masukkan angka yang kedua :");
		scanf ("%g", &angkaKedua);
		
		operasi (angkaPertama, angkaKedua, hasilKalkulasi);
	}
}

