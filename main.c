#include "Rahaditya.h"

int main () {
	float angkaPertama = 0, angkaKedua = 0, hasilKalkulasi = 0;
	char operatorKalkulasi;
	
	printf ("Masukkan angka yang pertama :");
	scanf ("%g", &angkaPertama);
	printf ("Masukkan angka yang kedua :");
	scanf ("%g", &angkaKedua);
	
	operasi (angkaPertama, angkaKedua, hasilKalkulasi);
}

