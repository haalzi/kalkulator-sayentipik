#include "Canandra.h"
#include <stdio.h>
#include <stdlib.h>

	//deklarsi
	float a, b, hasilx, hasils, hasilcsc;
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

			case 3:
				printf("COSEC\n");
				printf("Masukkan derajat : ");
				scanf("%g", &a);
				a = (3.1415926535897931*a)/180.0;
				cosec(a);
				hasilcsc = 1/cosec(a);
				printf("COSEC(%g) = %f\n", a, hasilcsc);
				break;
<<<<<<< HEAD
				
=======

			case 4:
				printf("LOGARITMA\n");
				printf("Masukkan sebuah angka : ");
    			scanf("%g", &b);
				 a = logbase10(b);
				printf("log10(%g) = %f\n", b, a);

    			break;
    			
>>>>>>> 1fc8e2a508a599dfd8bde482c47a4f3e0fd81c00
			default:
				system("cls");
				printf("Inputan yang anda masukkan salah!\n\n");
				printf("...");
				goto here;
				
		}
	
		
		return 0;
		
	}
