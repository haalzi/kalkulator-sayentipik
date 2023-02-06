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

void operasi (float angkaPertama, float angkaKedua, float hasilKalkulasi) {
	char operatorKalkulasi;
	printf ("Operasi yang dilakukan : ", angkaPertama);
	printf("(+ - * /)");
	scanf ("%s", &operatorKalkulasi);
	
	switch(operatorKalkulasi) {
		case '+' :
//			hasilKalkulasi = tambah(angkaPertama, angkaKedua);
			break;
		case '-' :
			
			break;
		case '*' :
			
			break;
		case '/' :
			
			break;
		default :
			printf ("Anda salah memasukkan");
			break;
	}	
	printf ("%g", hasilKalkulasi);
}

//float tambah(float a, float b){
//	return a+b;
//}
