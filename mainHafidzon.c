#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "exp.h"
#define pi 3.14159265358979323846

int main()
{
	double a, b, hsl;
	int i;
	printf("Masukan operasi yang diinginkan\n 1. Bagi\n 2. Exponen\n 3. Faktorial\n 4. Tangen\n 5. Cotangen\n");
	scanf("%d", &i);
	switch(i)
	{
		case 1:
			printf("Masukan angka yang ingin dibagi\t:\t");
			scanf("%lf", &a);
			printf("\nMasukan angka pembagi\t:\t");
			scanf("%lf", &b);
			hsl = bagi(a, b);
			printf("\n%g / %g\t:\t%g", a, b, hsl);
			
			break;
			
		case 2:
			printf("Masukan angka yang ingin di exponenkan\t");
			scanf("%lf", &a);
			printf("Masukan berapa kali exponen\t");
			scanf("%d", &i);
			hsl = exponen(10, i);
			hsl = hsl * a;
			printf("\n%g exp 10 ^ %d\t:\t%.2lf", a, i, hsl);
			
			break;

		case 3:
			printf("Masukan angka yang ingin di faktorialkan\t");
			scanf("%lf", &a);
			hsl = fact(a);
			printf("\nFaktorial dari %g\t:\t%.2lf", a, hsl);
		
			break;
			
		case 4:
			printf("Masukan angka yang ingin di tangentkan\t");
			scanf("%lf", &a);
			hsl = tangen(a);
			printf("\nTangent dari %g\t:\t%lf", a, hsl);
			
			break;
			
		case 5:
			printf("Masukan angka yang ingin di cotangentkan\t");
			scanf("%lf", &a);
			hsl = 1/tangen(a);
			printf("\nCoTangent dari %g\t:\t%.lf", a, hsl);
			
			break;
			
		default:
			main();
	}
	return 0;
}