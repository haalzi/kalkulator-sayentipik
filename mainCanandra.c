#include "Canandra.h"
#include <stdio.h>
#include <stdlib.h>

	//deklarsi
	float a,b,hasilmain,hasilsinus;

	int main()
	{
		printf("INI ADALAH PERKALIAN\n");
		printf("Masukkan angka pertama :");
		scanf("%g", &a);
		printf("Masukkan angka kedua :");
		scanf("%g", &b);
		hasilmain = perkalian(a,b);
		printf("\nHasil perkaliannya adalah : %g\n", hasilmain);
	
		
		printf("\nINI ADALAH FUNCTION SINUS\n");
		printf("Masukkan derajat dalam radian :");
		scanf("%g", &a);
		printf("Masukkan  nilai sembarang (5-200) :");
		scanf("%g", &b);
		hasilsinus = sinus(a,b);
		printf("\nSinus %.2lf adalah : %.2lf",a ,hasilsinus);
		
		
		return 0;
		
	}
