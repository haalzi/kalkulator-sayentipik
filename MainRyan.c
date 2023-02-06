#include <stdio.h>
#include <stdlib.h>
#include "tambah.h"

int main (){
	
	float a, b, hasil;
	printf("masukkan angka yang ingin dijumlahkan");
	scanf("%f", &a);
	printf("masukkan angka penjumlah");
	scanf("%f", &b);
	hasil = tambah(a, b);
	printf("\n%g + %g\t:\t%g", a, b, hasil);
	
	return 0;
}
