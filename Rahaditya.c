#include "Rahaditya.h"

void tampilanStruktur (int pilihStruktur) {
	switch (pilihStruktur) {
		case 1:
			printf("\n\t\t\t\t\t\t\t==============================================================================================\n\n");
			break;
		case 2:
			printf("\t\t\t\t\t\t\t\t\t\t\t     ");
			break;
		case 3:
			printf("\t\t\t\t\t\t\t\t\t");
			break;
		case 4:
			printf("\t\t\t\t\t\t\t----------------------------------------------------------------------------------------------\n");
			break;
		default :
			printf("\t\t\t\t\t\t\t");
			break;
	}
}

void tampilanLogo () {
	system("cls");
	tampilanStruktur (0);
	printf ("    /$$   /$$           /$$ /$$                 /$$             /$$               \n");
	tampilanStruktur (0);
	printf ("   | $$  /$$/          | $$| $$                | $$            | $$                        \n");
	tampilanStruktur (0);
	printf ("   | $$ /$$/   /$$$$$$ | $$| $$   /$$ /$$   /$$| $$  /$$$$$$  /$$$$$$    /$$$$$$   /$$$$$$ \n");
	tampilanStruktur (0);
	printf ("   | $$$$$/   |____  $$| $$| $$  /$$/| $$  | $$| $$ |____  $$|_  $$_/   /$$__  $$ /$$__  $$\n");
	tampilanStruktur (0);
	printf ("   | $$  $$    /$$$$$$$| $$| $$$$$$/ | $$  | $$| $$  /$$$$$$$  | $$    | $$  \\ $$| $$  \\__/\n");
	tampilanStruktur (0);
	printf ("   | $$\\  $$  /$$__  $$| $$| $$_  $$ | $$  | $$| $$ /$$__  $$  | $$ /$$| $$  | $$| $$      \n");
	tampilanStruktur (0);
	printf ("   | $$ \\  $$|  $$$$$$$| $$| $$ \\  $$|  $$$$$$/| $$|  $$$$$$$  |  $$$$/|  $$$$$$/| $$      \n");
	tampilanStruktur (0);
	printf ("   |__/  \\__/ \\_______/|__/|__/  \\__/ \\______/ |__/ \\_______/   \\___/   \\______/ |__/      \n");
	tampilanStruktur (1);
}

void tampilanKalkulator (float hasil, char * outputOperasi) {
	char temp[256], * p;
	gcvt(hasil, 256, temp);
	if (fmod(hasil, 1) == 0) {
		if (p = strchr(temp, '.')) {
			*p = '\0';
		}
	}
	tampilanLogo ();
	tampilanStruktur (3);
	printf (" ____________________________________________________________\n");
	tampilanStruktur (3);
	printf ("|                                                            |\n");
	tampilanStruktur (3);
	printf ("|     __________________________________________________     |\n");
	tampilanStruktur (3);
	printf ("|    |                                                  |    |\n");
	tampilanStruktur (3);
	printf ("|    | ");
	if (strlen(outputOperasi) <= 0) {
		printf ("%s\t\t\t\t\t\t   =\t", outputOperasi);
	}
	else if (strlen(outputOperasi) < 8) {
		printf (" %s\t\t\t\t\t   =\t", outputOperasi);
	}
	else if (strlen(outputOperasi) < 16) {
		printf (" %s\t\t\t\t   = \t", outputOperasi);
	}
	else if (strlen(outputOperasi) < 24) {
		printf (" %s\t\t\t    =\t", outputOperasi);
	}
	else if (strlen(outputOperasi) < 32) {
		printf (" %s\t\t    =\t", outputOperasi);
	}
	else if (strlen(outputOperasi) < 40) {
		printf (" %s\t    =\t", outputOperasi);
	}
	else if (strlen(outputOperasi) < 48) {
		printf (" %s    =\t", outputOperasi);
	}
	printf ("|    |\n");
	tampilanStruktur (3);
	printf ("|    | ");
	if (strlen(temp) <= 3) {
		printf ("\t\t\t\t\t\t   %s \t", temp);
	}
	else {
		printf ("\t\t\t\t\t      %.8s \t", temp);
	}
	printf ("|    |\n");
	tampilanStruktur (3);
	printf ("|    |__________________________________________________|    |\n");
	tampilanStruktur (3);
	printf ("|                                                            |\n");
	tampilanStruktur (3);
	printf ("|     __________   _______   _______   _______   _______     |\n");
	tampilanStruktur (3);
	printf ("|    |          | |       | |       | |       | |       |    |\n");
	tampilanStruktur (3);
	printf ("|    |    exp   | |   n!  | |  |x|  | |   C   | |  DEL  |    |\n");
	tampilanStruktur (3);
	printf ("|    |__________| |_______| |_______| |_______| |_______|    |\n");
	tampilanStruktur (3);
	printf ("|     __________   _______   _______   _______   _______     |\n");
	tampilanStruktur (3);
	printf ("|    |          | |       | |       | |       | |       |    |\n");
	tampilanStruktur (3);
	printf ("|    |    cot   | |   e   | |  phi  | |  log  | |  ln   |    |\n");
	tampilanStruktur (3);
	printf ("|    |__________| |_______| |_______| |_______| |_______|    |\n");
	tampilanStruktur (3);
	printf ("|     __________   _______   _______   _______   _______     |\n");
	tampilanStruktur (3);
	printf ("|    |          | |       | |       | |       | |       |    |\n");
	tampilanStruktur (3);
	printf ("|    |    sec   | |   ^   | |   v   | |   %%   | |   /   |    |\n");
	tampilanStruktur (3);
	printf ("|    |__________| |_______| |_______| |_______| |_______|    |\n");
	tampilanStruktur (3);
	printf ("|     __________   _______   _______   _______   _______     |\n");
	tampilanStruktur (3);
	printf ("|    |          | |       | |       | |       | |       |    |\n");
	tampilanStruktur (3);
	printf ("|    |  cosec   | |   7   | |   8   | |   9   | |   x   |    |\n");
	tampilanStruktur (3);
	printf ("|    |__________| |_______| |_______| |_______| |_______|    |\n");
	tampilanStruktur (3);
	printf ("|     __________   _______   _______   _______   _______     |\n");
	tampilanStruktur (3);
	printf ("|    |          | |       | |       | |       | |       |    |\n");
	tampilanStruktur (3);
	printf ("|    |    tan   | |   4   | |   5   | |   6   | |   -   |    |\n");
	tampilanStruktur (3);
	printf ("|    |__________| |_______| |_______| |_______| |_______|    |\n");
	tampilanStruktur (3);
	printf ("|     __________   _______   _______   _______   _______     |\n");
	tampilanStruktur (3);
	printf ("|    |          | |       | |       | |       | |       |    |\n");
	tampilanStruktur (3);
	printf ("|    |    cos   | |   1   | |   2   | |   3   | |   +   |    |\n");
	tampilanStruktur (3);
	printf ("|    |__________| |_______| |_______| |_______| |_______|    |\n");
	tampilanStruktur (3);
	printf ("|     __________   _______   _______   _______   _______     |\n");
	tampilanStruktur (3);
	printf ("|    |          | |       | |       | |       | |       |    |\n");
	tampilanStruktur (3);
	printf ("|    |    sin   | |  +/-  | |   0   | |   .   | |   =   |    |\n");
	tampilanStruktur (3);
	printf ("|    |__________| |_______| |_______| |_______| |_______|    |\n");
	tampilanStruktur (3);
	printf ("|                                                            |\n");
	tampilanStruktur (3);
	printf ("|____________________________________________________________|\n");
}

void tampilanDLL (char inputLayoutDLL) {
	int i, j, dariSatuan, keSatuan, baris, kolom, rows, columns, matrik1[10][10], matrik2[10][10], jumlah[10][10];
	float x, y, z, hasil, Panjang, ConvertedPanjang, temperature, result;
	char pilihan;
		    
	switch (inputLayoutDLL) {
		case '1':
			tampilanStruktur (2);
		    printf("Masukkan nilai n\n");
		    inputAngka (&x);
			tampilanStruktur (2);
		    printf("Masukkan nilai r\n");
		    inputAngka (&y);
			hasil = kombinasi(x, y);
			tampilanStruktur (3);
			printf("\t   Kombinasi dari n = %g dan r = %g adalah %g\n", x, y, hasil);
			break;
		case '2':
			tampilanStruktur (2);
			printf("PERMUTASI\n");
			tampilanStruktur (2);
			printf("Masukkan n\n");
		    inputAngka (&x);
			tampilanStruktur (2);
			printf("Masukkan r\n");
		    inputAngka (&y);
			hasil = permutasi(x, y);
			tampilanStruktur (2);
			printf("Permutasi : %g\n", hasil);
			break;
		case '3':
			tampilanStruktur (2);
			printf("1. Pertambahan\n");
			tampilanStruktur (2);
			printf("2. Pengurangan\n");
			tampilanStruktur (2);
			printf("3. Perkalian\n");
			tampilanStruktur (2);
			printf("4. Pembagian\n\n");
			inputKarakter (&pilihan);
			tampilanStruktur (2);
			printf("Jumlah baris matrik : \n");
			tampilanStruktur (4);
			tampilanStruktur (0);
			printf("Input : ");
			scanf ("%d", &baris);
			tampilanStruktur (4);
			printf ("\n");
			tampilanStruktur (2);
			printf("Jumlah kolom matrik : \n");
			tampilanStruktur (4);
			tampilanStruktur (0);
			printf("Input : ");
			scanf ("%d", &kolom);
			tampilanStruktur (4);
			printf ("\n");
			switch (pilihan) {
				case '1':
					matriksPenjumlahan (baris, kolom);
					break;
				case '2':
				    matriksPengurangan (baris, kolom);
					break;
				case '3':
					matriksPerkalian (baris, kolom);
					break;
				case '4':
					matriksPembagian (baris, kolom);
					break;
				default :
					pesanEror ();
					break;
			}
			break;
		case '4':
			invers();
			break;
		case '5':
		    // Taking input from the user
			tampilanStruktur (2);
			printf("Jumlah baris matrik : \n");
			tampilanStruktur (4);
			tampilanStruktur (0);
			printf("Input : ");
			scanf ("%d", &baris);
			tampilanStruktur (4);
			printf ("\n");
			tampilanStruktur (2);
			printf("Jumlah kolom matrik : \n");
			tampilanStruktur (4);
			tampilanStruktur (0);
			printf("Input : ");
			scanf ("%d", &kolom);
			tampilanStruktur (4);
			printf ("\n");
		    // Allocate memory for the matrix
		    float **matrix = (float **)malloc(baris * sizeof(float *));
		    for (i = 0; i < baris; i++) {
		        matrix[i] = (float *)malloc(kolom * sizeof(float));
		    }
		
		    // Taking input from the user
			tampilanStruktur (2);
		    printf("Masukan elemen dari matriks : \n");
		    for (i = 0; i < baris; i++) {
		        for (j = 0; j < kolom; j++) {
					tampilanStruktur (0);
		            printf("matriks [%d][%d] : ", i, j);
		            scanf("%f", &matrix[i][j]);
		        }
		    }
		    printf ("\n");
			tampilanStruktur (4);
		    printf ("\n");
			tampilanStruktur (2);
		    printf("Matriks :\n");
		    printMatrix (matrix, baris, kolom);
			
			 // Transpose the matrix
		    float **transpose = transposeMatrix(matrix, baris, kolom);
		    printf ("\n");
			tampilanStruktur (2);
		    printf("Transpose Matriks :\n");
		    printMatrix(transpose, kolom, baris);
		
		    // Free the memory
		    for (i = 0; i < baris; i++) {
		        free(matrix[i]);
		    }
		    free(matrix);
		
		    for (i = 0; i < kolom; i++) {
		        free(transpose[i]);
		    }
		    free(transpose);
			break;
			
		case '6':
			tampilanStruktur (2);
			printf("DISKRIMINAN\n");
			tampilanStruktur (2);
			printf("Masukkan koefisien :\n");
			tampilanStruktur (2);
		    printf("Masukkan nilai b :\n");
		    inputAngka (&x);
			tampilanStruktur (2);
		    printf("Masukkan nilai a :\n");
		    inputAngka (&y);
			tampilanStruktur (2);
		    printf("Masukkan nilai c :\n");
		    inputAngka (&z);
			diskriminan(x, y, z);
			break;
			
		case '7':
			tampilanStruktur (2);
			printf("LUAS LINGKARAN\n\n");
			tampilanStruktur (2);
			printf("Masukkan jari-jari (cm) : \n");
		    inputAngka (&x);
			hasil = lingkaran(x);
			tampilanStruktur (2);
			printf("Luas lingkaran adalah : %g cm^2\n", hasil);
			break;
			
		case '8':
			tampilanStruktur (2);
		    printf("Masukkan suhu skala ke konversi dari:\n");
			tampilanStruktur (2);
		    printf("1. Celsius\n");
			tampilanStruktur (2);
		    printf("2. Fahrenheit\n");
			tampilanStruktur (2);
		    printf("3. Reamur\n");
			tampilanStruktur (2);
		    printf("4. Kelvin\n\n");
			tampilanStruktur (4);
			tampilanStruktur (0);
		    printf("Input : ");
		    scanf("%d", &pilihan);
			tampilanStruktur (4);
		    printf("\n");
			tampilanStruktur (2);
		    printf("masukan temperatur : \n");
			tampilanStruktur (4);
			tampilanStruktur (0);
		    printf("Input : ");
		    scanf("%g", &temperature);
			tampilanStruktur (4);
		    printf ("\n");
		    switch (pilihan) {
		        case 1:
					tampilanStruktur (2);
		            printf("%.2f derajat Celsius =\n", temperature);
					tampilanStruktur (2);
		            printf("%.2f derajat Fahrenheit\n", convertCelsiuskeFahrenheit(temperature));
					tampilanStruktur (2);
		            printf("%.2f derajat Reamur\n", convertCelsiuskeReamur(temperature));
					tampilanStruktur (2);
		            printf("%.2f derajat Kelvin\n", convertCelsiuskeKelvin(temperature));
		            break;
		            
		        case 2:
					tampilanStruktur (2);
		            printf("%.2f derajat Fahrenheit =\n", temperature);
					tampilanStruktur (2);
		            printf("%.2f derajat Celsius\n", 
		            convertFahrenheitkeCelsius(temperature));
					tampilanStruktur (2);
		            printf("%.2f derajat Reamur\n", convertCelsiuskeReamur(convertFahrenheitkeCelsius(temperature)));
					tampilanStruktur (2);
		            printf("%.2f derajat Kelvin\n", convertFahrenheitkeKelvin(temperature));
		            break;
		            
		        case 3:
					tampilanStruktur (2);
		            printf("%.2f derajat Reamur =\n", temperature);
					tampilanStruktur (2);
		            printf("%.2f derajat Celsius\n", convertReamurkeCelsius(temperature));
					tampilanStruktur (2);
		            printf("%.2f derajat Fahrenheit\n", convertCelsiuskeFahrenheit(convertReamurkeCelsius(temperature)));
					tampilanStruktur (2);
		            printf("%.2f derajat Kelvin\n", convertReamurkeKelvin(temperature));
		            break;
		            
		        case 4:
					tampilanStruktur (2);
		            printf("%.2f derajat Kelvin =\n", temperature);
					tampilanStruktur (2);
		            printf("%.2f derajat Celsius\n", convertKelvinkeCelsius(temperature));
					tampilanStruktur (2);
		            printf("%.2f derajat Reamur\n", convertKelvinkeReamur(temperature));
					tampilanStruktur (2);
		            printf("%.2f derajat Fahrenheit\n", convertKelvinkeFahrenheit(temperature));
		            break;
			}
			break;
			
		case '9':
		    // mencetak unit yang tersedia
			tampilanStruktur (2);
		    printf("Satuan yang tersedia:\n");
			tampilanStruktur (2);
		    printf("1. Kilometer\n");
			tampilanStruktur (2);
		    printf("2. Hektameter\n");
			tampilanStruktur (2);
		    printf("3. Dekameter\n");
			tampilanStruktur (2);
		    printf("4. Meter\n");
			tampilanStruktur (2);
		    printf("5. Desimeter\n");
			tampilanStruktur (2);
		    printf("6. Sentimeter\n");
			tampilanStruktur (2);
		    printf("7. Millimeter\n\n");
		
		//mendapatkan panjang dan unit input dan output dari pengguna
			tampilanStruktur (2);
		    printf("Masukkan Panjang : \n");
		    inputAngka (&Panjang);
			tampilanStruktur (0);
		    printf("Masukkan input unit (1-7): ");
			scanf ("%d", &dariSatuan);
			tampilanStruktur (0);
		    printf("Masukkan output unit (1-7): ");
			scanf ("%d", &keSatuan);
			tampilanStruktur (0);
		
		// Konversikan Panjang dari unit input ke meter
		    switch (dariSatuan) {
		        case 1:
		            Panjang = ConvertPanjang(Panjang, KILOMETER, METER);
		            break;
		            
		        case 2:
		            Panjang = ConvertPanjang(Panjang, HECTOMETER, METER);
		            break;
		            
		        case 3:
		            Panjang = ConvertPanjang(Panjang, DEKAMETER, METER);
		            break;
		            
		        case 4:
		            // Panjang sudah dalam satuan meter
		            break;
		            
		        case 5:
		            Panjang = ConvertPanjang(Panjang, DesiMETER, METER);
		            break;
		            
		        case 6:
		            Panjang = ConvertPanjang(Panjang, SentiMETER, METER);
		            break;
		            
		        case 7:
		            Panjang = ConvertPanjang(Panjang, MILLIMETER, METER);
		            break;
		            
		        default:
		        	pesanEror ();
		            break;
		    }
		// Konversi Panjang dari meter ke unit output
		    switch (keSatuan) {
		        case 1:
		            ConvertedPanjang = ConvertPanjang(Panjang, METER, KILOMETER);
		            break;
		            
		        case 2:
		            ConvertedPanjang = ConvertPanjang(Panjang, METER, HECTOMETER);
		            break;
		            
		        case 3:
		            ConvertedPanjang = ConvertPanjang(Panjang, METER, DEKAMETER);
		            break;
		            
		        case 4:
		            ConvertedPanjang = Panjang;
		            break;
		            
		        case 5:
		            ConvertedPanjang = ConvertPanjang(Panjang, METER, DesiMETER);
		            break;
		            
		        case 6:
		            ConvertedPanjang = ConvertPanjang(Panjang, METER, SentiMETER);
		            break;
		            
		        case 7:
		            ConvertedPanjang = ConvertPanjang(Panjang, METER, MILLIMETER);
		            break;
		            
		        default:
		        	pesanEror ();
		            break;
		    }
		
		    // mencetak Panjang yang Dikonversi
		    printf("hasil konversi Panjang: %g\n", ConvertedPanjang);
			break;
		default :
			pesanEror();
			break;
	}
}

void pesanEror () {
	tampilanStruktur (0);
	printf ("\t\t\t      Anda memasukkan input yang salah\n");
}

char inputKarakter (char * karakter) {
	tampilanStruktur (4);
	tampilanStruktur (0);
	printf ("Input : ");
	scanf(" %s", &*karakter);fflush(stdin);
	tampilanStruktur (4);
	printf ("\n");
	return * karakter;
}

float inputAngka (float * angka) {
	tampilanStruktur (4);
	tampilanStruktur (0);
	printf ("Input : ");
	scanf(" %g", &*angka);fflush(stdin);
	tampilanStruktur (4);
	printf ("\n");
	return * angka;
}

float operasi (float angkaPertama, float angkaKedua, char operatorKalkulasi) {
    switch (operatorKalkulasi) {
    	case 'a':
    		return sinus (angkaPertama);
    	case 'b':
    		return cosinus (angkaPertama);
    	case 'c':
    		return tangen (angkaPertama);
    	case 'j':
    		return cosecan (angkaPertama);
    	case 'e':
    		return secan (angkaPertama);
    	case 'f':
    		return cotangen (angkaPertama);
    	case 'g':
    		return logbase10 (angkaPertama);
    	case 'h':
    		return ln (angkaPertama);
    	case 'i':
    		return akar (angkaPertama);
    	case 'k':
    		return mutlak (angkaPertama);
    	case 'd':
    		return modulus (angkaPertama, angkaKedua);
    	case '!':
    		return faktorial (angkaPertama);
    	case 'E':
    		angkaKedua = eksponen (10, angkaKedua);
    		return angkaPertama * angkaKedua;
        case '^':
            return perpangkatan (angkaPertama, angkaKedua);
        case '*':
            return perkalian (angkaPertama, angkaKedua);
        case '/':
            return pembagian (angkaPertama, angkaKedua);
        case '%':
            return persen (angkaPertama);
        case '+':
            return pertambahan (angkaPertama, angkaKedua);
        case '-':
            return pengurangan (angkaPertama, angkaKedua);
        default:
        	break;
    }
}

int prioritas (char operatorPrioritas) {
    switch (operatorPrioritas) {
		case '(':
        	return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case 'E':
        case '^':
        case 'd':
            return 3;
        default:
        	return -1;
        	break;
    }
}

void push (STACK * ss, char x) {
	ss->stack[++ss->stackTop] = x;
}

void pushAngka (STACK * ss, float x) {
	ss->stackNumber[++ss->stackNumberTop] = x;
}

char pop (STACK *ss) {
	if (isEmpty(ss)) {
		return -1;
	}
	else {
		return ss->stack[ss->stackTop--];
	}
}

float popAngka (STACK * ss) {
	if (isEmpty(ss)) {
		return -1;
	}
	else {
		return ss->stackNumber[ss->stackNumberTop--];
	}
}

char * perbaikiString (char * string) {
    int count = 0, i = 0;
    while (string[i] != '\0') {
        if (string[i] != ' ' && string[i] != '=') {
            string[count] = string[i];
            count++;
        }
		i++;
    }
    string[count] = '\0';
    return string;
}

char * negatifBilangan (char * string) {
	int i = 0, j = 1;
    while (string[i] != '\0') {
		if ((!isdigit(string[i-1]) && string[i-1] != ')') && string[i] == '-' && isdigit(string[i+1]) && string[i-1] != 'e' && (string[i-3] != 'p' && string[i-2] != 'h' && string[i-1] != 'i')) {
			char * stringSem, nol[] = "0", minus[] = "-", bukaKurung[] = "(", tutupKurung[] = ")", charSem;
			strncpy(stringSem, string, i);
			stringSem[i] = '\0';
			strcat(stringSem, bukaKurung);
			strcat(stringSem, nol);
			strcat(stringSem, minus);
			while (string[i] == '-' && isdigit(string[i+j])) {
				strncat(stringSem, &string[i+j], 1);
				j++;
			}
			strcat(stringSem, tutupKurung);
			strcat(stringSem, string + i+j);
			strcpy (string, stringSem);
		}
    	i++;
	}
	return string;
}

int isEmpty (STACK * ss) {
	if(ss->stackTop == -1) {
        return 1;
    }
	else{
        return 0;
    }
}

int isSaintifik (char operatorSaintifik) {
    if(operatorSaintifik == 'a' || operatorSaintifik == 'b' ||operatorSaintifik == 's' || operatorSaintifik == 'p' || operatorSaintifik == 'h' ||operatorSaintifik == 'c' || operatorSaintifik == 'o' || operatorSaintifik == 's' || operatorSaintifik == 't' || operatorSaintifik == 'e' || operatorSaintifik == 'n' || operatorSaintifik == 'i' || operatorSaintifik == 'l') {
    	return 1;
	}
    else {
    	return 0;
	}
}

int Saintifik (STACK * ss, char * inputOperasi, int i) {
	int j = 0;
	float angkaPertama, angkaKedua;
	char inputOperasiSem[256];
	if (inputOperasi[i] == 's' && inputOperasi[i+1] == 'i' && inputOperasi[i+2] == 'n') {
		i = i + 3;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'a');
	}
	if (inputOperasi[i] == 'c' && inputOperasi[i+1] == 'o' && inputOperasi[i+2] == 's' && inputOperasi[i+3] != 'e') {
		i = i + 3;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'b');
	}
	else if (inputOperasi[i] == 't' && inputOperasi[i+1] == 'a' && inputOperasi[i+2] == 'n') {
		i = i + 3;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'c');
	}
	else if (inputOperasi[i] == 'c' && inputOperasi[i+1] == 'o' && inputOperasi[i+2] == 's' && inputOperasi[i+3] == 'e' && inputOperasi[i+4] == 'c') {
		i = i + 5;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'j');
	}
	else if (inputOperasi[i] != 'o' && inputOperasi[i] == 's' && inputOperasi[i+1] == 'e' && inputOperasi[i+2] == 'c') {
		i = i + 3;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'e');
	}
	else if (inputOperasi[i] == 'c' && inputOperasi[i+1] == 'o' && inputOperasi[i+2] == 't') {
		i = i + 3;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'f');
	}
	else if (inputOperasi[i] == 'l' && inputOperasi[i+1] == 'o' && inputOperasi[i+2] == 'g') {
		i = i + 3;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'g');
	}
	else if (inputOperasi[i] == 'l' && inputOperasi[i+1] == 'n') {
		i = i + 2;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'h');
	}
	else if (inputOperasi[i] == 's' && inputOperasi[i+1] == 'q') {
		i = i + 2;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'i');
	}
	else if (inputOperasi[i] == 'p' && inputOperasi[i+1] == 'h' && inputOperasi[i+2] == 'i') {
		i = i + 2;
		pushAngka(&*ss, phi);
	}
	else if (inputOperasi[i-1] != 's' && inputOperasi[i] == 'e' && inputOperasi[i+1] != 'c') {
		pushAngka(&*ss, e);
	}
	else if (inputOperasi[i] == 'a' && inputOperasi[i+1] == 'b' && inputOperasi[i+2] == 's') {
		i = i + 3;
		i = kalkulasiSaintifik (&ss, inputOperasi, i, 'k');
	}
	return i;
}

int kalkulasiSaintifik (STACK ** ss, char * inputOperasi, int i, char tipeSaintifik) {
    int j = 0;
	float angkaPertama, angkaKedua;
	char inputOperasiSem[256];
	while((isdigit(inputOperasi[i]) || (inputOperasi[i] == '(' || (inputOperasi[i+2] == '-' && inputOperasi[i+1] == '0' && inputOperasi[i] == '(')) || inputOperasi[i] == '.') && (strlen(inputOperasi))) {
        if (inputOperasi[i+2] == '-' && inputOperasi[i+1] == '0' && inputOperasi[i] == '(') {
        	i+=2;
        	inputOperasiSem[j] = '-';
        	j++;
		}
		else if (isdigit(inputOperasi[i]) || inputOperasi[i] == '.') {
			inputOperasiSem[j] = inputOperasi[i];
        	j++;
		}
        i++;
    }
	inputOperasiSem[j] = '\0';
	if (!strchr (inputOperasiSem, '-')) {
		i--;
	}
	angkaPertama = strtod(inputOperasiSem, NULL);
	pushAngka(&**ss, operasi (angkaPertama, angkaKedua, tipeSaintifik));
	
	return i;
}

float kalkulasi(char * outputOperasi) {
	STACK s;
	s.stackTop = -1;
	s.stackNumberTop = -1;
	char inputOperasi[256], inputOperasiSem[256];
	int i = 0, j = 0;
	float angkaPertama, angkaKedua;
	
	tampilanStruktur (1);
	tampilanStruktur (0);
	printf("Input : ");
    scanf("%[^\n]s", inputOperasi);
    strcpy (inputOperasi, perbaikiString (inputOperasi));
	strcpy (outputOperasi, inputOperasi);
    strcpy (inputOperasi, negatifBilangan (inputOperasi));
	
    while (inputOperasi[i]) {
    	if (isdigit(inputOperasi[i])) {
			while (isdigit(inputOperasi[i]) || inputOperasi[i] == '.') {
            	inputOperasiSem[j++] = inputOperasi[i++];
			}
			inputOperasiSem[j] = '\0';
            pushAngka (&s, strtod(inputOperasiSem, NULL));
			j = 0;
			i--;
		}
		else if (inputOperasi[i] == '(') {
			push (&s, inputOperasi[i]);
		}
		else if (inputOperasi[i] == ')') {
			while (s.stack[s.stackTop] != '(') {
                angkaKedua = popAngka (&s);
                angkaPertama = popAngka (&s);
                pushAngka (&s, operasi(angkaPertama, angkaKedua, pop (&s)));
			}
            s.stackTop--;
		}
		else if (isSaintifik(inputOperasi[i])) {
			i = Saintifik (&s, inputOperasi, i);
		}
		else if (inputOperasi[i] == '!' || inputOperasi[i] == '%') {
        	angkaPertama = popAngka (&s);
        	
            pushAngka (&s, operasi(angkaPertama, angkaKedua, pop (&s)));
            push (&s, inputOperasi[i]);
		}
		else {
			if (inputOperasi[i] == 'm') {
				i = i + 2;
			}
            while (!isEmpty(&s) && prioritas(s.stack[s.stackTop]) >= prioritas(inputOperasi[i])) {
                angkaKedua = popAngka (&s);
                angkaPertama = popAngka (&s);
                pushAngka (&s, operasi(angkaPertama, angkaKedua, pop (&s)));
            }
            push (&s, inputOperasi[i]);
		}
		i++;
	}
	
	while (!isEmpty(&s)) {
	    angkaKedua = popAngka (&s);
	    angkaPertama = popAngka (&s);
        pushAngka (&s, operasi(angkaPertama, angkaKedua, pop (&s)));
	}
	return s.stackNumber[0];
}
