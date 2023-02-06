#include "perkalian.h"
#include <stdio.h>
#include <stdlib.h>

	//deklarsi
	float a,b,hasilmain;

	int main()
	{
		printf("INI ADALAH PERKALIAN\n");
		printf("Masukkan angka pertama :");
		scanf("%g", &a);
		printf("Masukkan angka kedua :");
		scanf("%g", &b);
		hasilmain = perkalian(a,b);
		printf("\nHasil perkaliannya adalah : %g", hasilmain);
		
		return 0;
		
	}
