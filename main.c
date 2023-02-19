#include "Rahaditya.h"

int main () {
	float angkaPertama = 0, angkaKedua = 0, hasilKalkulasi = 0, indexMax;
	int index, a, b, c;
	char operatorKalkulasi, ulang, angkaPertamaStr[100], angkaKeduaStr[100], hasilKalkulasiStr[100], arr[100][100];
	
	for (;;) {
		system("cls");
		printf ("Masukkan angka yang pertama :");
		scanf ("%g", &angkaPertama);
		printf ("Masukkan angka yang kedua :");
		scanf ("%g", &angkaKedua);
		inputOperator (&operatorKalkulasi);
		hasilKalkulasi = operasi (angkaPertama, angkaKedua, operatorKalkulasi);
		printf ("%g \n", hasilKalkulasi);
				
		printf("coba lagi? (y/t) ");
		scanf("%s", &ulang);
		if (ulang == 't' || ulang == 'T') {
			break;
		}
	}
	return 0;
}
