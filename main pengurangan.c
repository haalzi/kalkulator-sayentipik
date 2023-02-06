#include <stdio.h>
#include <stdlib.h>
#include "pengurangan2.h"

int main(){
//deklarasi
 float a,b;
 float hasil;
 //input
    printf("Masukan nilai petama: ",a);
    scanf("%g",&a);
    printf("Masukakan nilai kedua: ",b);
    scanf("%g",&b);
    hasil=a-b;
    printf("\n%g - %g = %g",a,b,hasil);
    
return 0 ;
}
	