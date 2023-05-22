#include "Rahaditya.h"
#include "Canandra.h"
#include "Claudia.h"
#include "Hafidzon.h"
#include "Ryan.h"

int main () {
	char outputOperasi, inputOperasi[256], informasi[512];
	int i;
	
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	system("title Kalkulator Sainstifik");
	
	for (;;) {
		memset(informasi,0,strlen (informasi));
		tampilanKalkulator(0, "");
		tampilanStruktur (1);
		informasiInput ();
    	gotoxy (81, 15);
	    scanf ("%[^\n]s", &inputOperasi);
		fflush (stdin);
		
		tampilanKalkulator (kalkulasi(&outputOperasi, inputOperasi, informasi), &outputOperasi);
		tampilanStruktur (1);
		tampilanStruktur (0);
    	gotoxy (77, 52);
		printf ("Tekan (i) untuk informasi, tekan (x) untuk keluar");
		fflush (stdin);
		switch (getch ()) {
			case 'x':
			case 'X':
				return 0;
			case 'i':
			case 'I':
    			gotoxy (77, 52);
				printf ("           Press any key to continue...          ");
				gotoxy (1, 14);
				printf ("Informasi");
				gotoxy (0, 15);
				printf ("--------------------------------------------------------------\n");
				for(i = 0; informasi[i] != '\0'; i ++) {
				    printf ("%c", informasi[i]);
				    Sleep(1);
				    if (informasi[i-1] == '\n' && informasi[i] == '\n') {
				    	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
				    	getch ();
					}
				}
				printf ("\n\n--------------------------------------------------------------"); getch ();
				break;
		}
	}
}
