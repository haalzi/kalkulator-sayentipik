#include "Canandra.h"
#include <stdio.h>
#include <stdlib.h>

	//deklarsi
	float a, b, hasilx, hasils;
	int opt1;
	
	int main()
	{
		here:
		menu();
		printf("\nAyo pilih : ");
		scanf("%d", &opt1);
		system("cls");
		
		switch (opt1)
		{
			case 1:
				printf("PERKALIAN\n\n");
				printf("Masukkan angka pertama : ");
				scanf("%g", &a);
				printf("Masukkan angka kedua :");
				scanf("%g", &b);
				hasilx = perkalian(a,b);
				printf("Hasilnya adalah : %g", hasilx);
				break;

			case 2:
				printf("SIN\n");
				printf("Masukkan derajat : ");
				scanf("%g", &a);
				a = (3.1415926535897931*a)/180.0;
				sinus(a);
				hasils = sinus(a);
				printf("SIN(%g) = %f\n", a, hasils);
				break;

			default:
				system("cls");
				printf("Inputan yang anda masukkan salah!\n\n");
				printf("...");
				goto here;
				
		}
	
		
		return 0;
		
	}
