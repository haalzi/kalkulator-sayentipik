#include "Rahaditya.h"
#include "Canandra.h"
#include "Claudia.h"
#include "Hafidzon.h"
#include "Ryan.h"

int main () {
	char outputOperasi, inputOperasi[256];
	
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	system("title Kalkulator Sainstifik - Kalkulator");
	for (;;) {
		tampilanKalkulator(0, "");
		tampilanStruktur (1);
    	gotoxy(81, 15);
	    scanf("%[^\n]s", &inputOperasi);
		fflush (stdin);
		
		
		tampilanKalkulator(kalkulasi(&outputOperasi, inputOperasi), &outputOperasi);
		tampilanStruktur (1);
		tampilanStruktur (0);
		printf ("\t\t\t\tPress any key to continue...");
		getch ();
	}
	
	return 0;
}

void gotoxy(int x, int y) {
    COORD coord;
     
    coord.X = x;
    coord.Y = y;
     
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
