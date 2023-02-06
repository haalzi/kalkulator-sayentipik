#include <stdio.h>
#include <stdlib.h>
#include "bagi.h"

int main()
{
	float a, b, hsl;
	printf("Masukan angka yang ingin dibagi\t:\t");
	scanf("%g", &a);
	printf("\nMasukan angka pembagi\t:\t");
	scanf("%g", &b);
	hsl = bagi(a, b);
	printf("\n%g / %g\t:\t%g", a, b, hsl);
	
	return 0;
}