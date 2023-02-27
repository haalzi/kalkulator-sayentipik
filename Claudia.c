#include "Rahaditya.h"

float pengurangan (float x, float y) {
	return x - y;
}

float cosinus (float x) {
	return cos ( (x * phi) / 180 );
}

float secan (float x) {
	return 1 / cos ( (x * phi) / 180 );
}

float ln (float x) {
    float hasil;
    hasil = log (x);
    return hasil;
}

int matriksPenjumlahan (int baris, int kolom) {
	int i, j, matrik1[10][10], matrik2[10][10], jumlah[10][10];
	tampilanStruktur (2);
    printf("Nilai matrik 1 : \n");
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 1[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik1[i][j]);
		}
	}
	printf ("\n");
	tampilanStruktur (2);
	printf("Matrik 1 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
    printf("Nilai matrik 2 : \n");
	for (i = 0; i < baris; i++){    
		for (j = 0 ; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 2[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik2[i][j]);
		}
	}
	printf("\n");
	tampilanStruktur (2);
	printf("Matrik 2 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
	printf("Hasil Penjumlahan Matrik :\n\n");
	for (i = 0; i < baris; i++) {
		tampilanStruktur (2);
		for (j = 0 ; j < kolom; j++) {
			jumlah[i][j] = matrik1[i][j] + matrik2[i][j];
			printf("%d\t", jumlah[i][j]);
		}
		printf("\n"); 
    }
}

int matriksPengurangan  (int baris, int kolom) {
    int i, j, matrik1[10][10], matrik2[10][10], jumlah[10][10];
	tampilanStruktur (2);
    printf("Nilai matrik 1 : \n");
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 1[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik1[i][j]);
		}
	}
	printf ("\n");
	tampilanStruktur (2);
	printf("Matrik 1 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
    printf("Nilai matrik 2 : \n");
	for (i = 0; i < baris; i++){    
		for (j = 0 ; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 2[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik2[i][j]);
		}
	}
	printf("\n");
	tampilanStruktur (2);
	printf("Matrik 2 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
	printf("Hasil Pengurangan Matrik :\n\n");
	for (i = 0; i < baris; i++) {
		tampilanStruktur (2);
		for (j = 0 ; j < kolom; j++) {
			jumlah[i][j] = matrik1[i][j] - matrik2[i][j];
			printf("%d\t", jumlah[i][j]);
		}
		printf("\n"); 
    }
}

int matriksPerkalian  (int baris, int kolom) {
    int i, j, matrik1[10][10], matrik2[10][10], jumlah[10][10];
	tampilanStruktur (2);
    printf("Nilai matrik 1 : \n");
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 1[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik1[i][j]);
		}
	}
	printf ("\n");
	tampilanStruktur (2);
	printf("Matrik 1 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
    printf("Nilai matrik 2 : \n");
	for (i = 0; i < baris; i++){    
		for (j = 0 ; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 2[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik2[i][j]);
		}
	}
	printf("\n");
	tampilanStruktur (2);
	printf("Matrik 2 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
	printf("Hasil Perkalian Matrik :\n\n");
	for (i = 0; i < baris; i++) {
		tampilanStruktur (2);
		for (j = 0 ; j < kolom; j++) {
			jumlah[i][j] = matrik1[i][j] * matrik2[i][j];
			printf("%d\t", jumlah[i][j]);
		}
		printf("\n"); 
    }
}
int matriksPembagian (int baris, int kolom) {
    int i, j, matrik1[10][10], matrik2[10][10], jumlah[10][10];
	tampilanStruktur (2);
    printf("Nilai matrik 1 : \n");
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 1[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik1[i][j]);
		}
	}
	printf ("\n");
	tampilanStruktur (2);
	printf("Matrik 1 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
    printf("Nilai matrik 2 : \n");
	for (i = 0; i < baris; i++){    
		for (j = 0 ; j < kolom; j++){
			tampilanStruktur (0);
			printf("Input Matriks 2[%d][%d] : ",i+1,j+1);
			scanf("%d",&matrik2[i][j]);
		}
	}
	printf("\n");
	tampilanStruktur (2);
	printf("Matrik 2 : \n\n");
	for (i=0; i< baris; i++){
		tampilanStruktur (2);
		for (j=0; j<kolom; j++){
			printf("%3d", matrik2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	tampilanStruktur (4);
	printf("\n");
	tampilanStruktur (2);
	printf("Hasil Pembagian Matrik :\n\n");
	for (i = 0; i < baris; i++) {
		tampilanStruktur (2);
		for (j = 0 ; j < kolom; j++) {
			jumlah[i][j] = matrik1[i][j] / matrik2[i][j];
			printf("%d\t", jumlah[i][j]);
		}
		printf("\n"); 
    }
}

int invers() {
	int c[2][2]={1,2,3,4};
	int x,y,det, i, j; 
	 
	for (i=0; i< 2; i++){
	    for (j=0; j<2; j++){
			tampilanStruktur (0);
			printf("masukkan elemen [%d] [%d] : ",i+1,j+1);
        	scanf("%d",&c[i][j]);
	    }
//	    return c[i][j];
	}
	printf("\n");
	tampilanStruktur (2);
	printf("Matriks A: \n");
	for (i=0; i< 2; i++){
		tampilanStruktur (2);
    	for (j=0; j<2; j++){
    		printf("%3d", c[i][j]);
    	}
    	printf("\n");
	}
	
	det=c[0][0]*c[1][1]-c[1][0]*c[0][1];
	int A2[2][2];
	A2[1][1]=c[0][0];
	A2[0][0]=c[1][1];
	A2[0][1]=c[0][1]*-1;
	A2[1][0]=c[1][0]*-1;
	A2[1][1]=c[0][0];
	A2[0][0]=c[1][1];
	A2[0][1]=c[0][1]*-1;
	A2[1][0]=c[1][0]*-1;
	
	printf("\n");
	tampilanStruktur (2);
	printf("Invers: \n");
	for (i=0; i< 2; i++){
		tampilanStruktur (2);
    	for (j=0; j<2; j++){
    		printf("%3d",  A2[i][j]/det);
    	}
    	printf("\n");
	}
	return A2[i][j]/det;
}

