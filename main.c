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
		
		
		
		
//		system("cls");
//		printf ("Masukkan angka yang pertama :");
//		scanf ("%c", &angkaPertama);
//		printf ("Masukkan angka yang kedua :");
//		scanf ("%c", &angkaKedua);
//		inputOperator (&operatorKalkulasi);
//		hasilKalkulasi = operasi (angkaPertama, angkaKedua, operatorKalkulasi);
//		printf ("%g \n", hasilKalkulasi);
		
//		a = angkaPertama * 2;
//		if(a % 2 == '0') {
//			a = angkaPertama;
//			angkaPertama = a;
//			printf("%d", a);
//		}
//		else {
//			
//		}
//		gcvt(angkaPertama, 6, angkaPertamaStr);
//		gcvt(angkaKedua, 6, angkaKeduaStr);
//		gcvt(hasilKalkulasi, 6, hasilKalkulasiStr);
//		indexMax = strlen(angkaPertamaStr) + strlen(angkaKeduaStr) + strlen(hasilKalkulasiStr);
//		a = (int)angkaPertama % 1;
		
//		char *o = angkaPertamaStr;
//		char *p = arr[index];
//		strcpy (p, o);
////		char *z = arr[index];
////		strcpy (z, " ");
//		char *q = angkaKeduaStr;
//		char *r = arr[index] + strlen(arr[index]);
//		strcpy (r, q);
//		char *s = hasilKalkulasiStr;
//		char *t = arr[index] + strlen(arr[index]);
//		strcpy (t, s);
//		
//		printf("%s", arr);
////		for(float i = 0; i <= index; i++) {
////			
////		}
//		index++;
////		for (index = 0; index <= strlen(angkaPertamaStr); index++) {
////			arr[index] = angkaPertamaStr
////		}


		
		
		printf("coba lagi? (y/t) ");
		scanf("%s", &ulang);
		if (ulang == 't' || ulang == 'T') {
			break;
		}
	}
	return 0;
}
