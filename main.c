#include "Rahaditya.h"

int main () {
	char ulang, inputMain, inputMainDLL, outputOperasi;
	
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	for (;;) {
		system("title Kalkulator Sainstifik");
		tampilanLogo ();
		tampilanStruktur (0);
		printf ("Pilih :\n");
		tampilanStruktur (2);
		printf ("1. Kalkulator\n");
		tampilanStruktur (2);
		printf ("2. Dan lain-lain\n\n");
		inputKarakter (&inputMain);
		switch (inputMain) {
			case '1':
				system("title Kalkulator Sainstifik - Kalkulator");
				tampilanKalkulator(0, "");
				tampilanKalkulator(kalkulasi(&outputOperasi), &outputOperasi);
				break;
			
			case '2':
				system("title Kalkulator Sainstifik - Dan lain-lain");
				tampilanLogo ();
				tampilanStruktur (2);
				printf ("1. Kombinasi\n");
				tampilanStruktur (2);
				printf ("2. Permutasi\n");
				tampilanStruktur (2);
				printf ("3. Matriks\n");
				tampilanStruktur (2);
				printf ("4. Invers\n");
				tampilanStruktur (2);
				printf ("5. Transpose\n");
				tampilanStruktur (2);
				printf ("6. Diskriminan\n");
				tampilanStruktur (2);
				printf ("7. Luas Lingkaran\n");
				tampilanStruktur (2);
				printf ("8. Konversi Suhu\n");
				tampilanStruktur (2);
				printf ("9. Konversi Panjang\n\n");
				inputKarakter (&inputMainDLL);
				tampilanDLL (inputMainDLL);
				break;
			
			default:
				pesanEror();
				break;
		}
		printf ("\n");
		tampilanStruktur (2);
		printf("coba lagi? (y/t)\n");
		inputKarakter (&ulang);
		if (ulang == 't' || ulang == 'T') {
			break;
		}
	}
	
	return 0;
}
