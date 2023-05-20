#include "Rahaditya.h"
#include "Canandra.h"
#include "Claudia.h"
#include "Hafidzon.h"
#include "Ryan.h"

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

void tampilanKalkulator (double hasil, char * outputOperasi) {
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
	printf ("|    |   %s", outputOperasi);
	gotoxy(123, 15);
	printf ("=    |    |\n");
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
	double x, y, z, hasil, Panjang, ConvertedPanjang, temperature, result;
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
		    double **matrix = (double **)malloc(baris * sizeof(double *));
		    for (i = 0; i < baris; i++) {
		        matrix[i] = (double *)malloc(kolom * sizeof(double));
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
		    double **transpose = transposeMatrix(matrix, baris, kolom);
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

double inputAngka (double * angka) {
	tampilanStruktur (4);
	tampilanStruktur (0);
	printf ("Input : ");
	scanf(" %g", &*angka);fflush(stdin);
	tampilanStruktur (4);
	printf ("\n");
	return * angka;
}

double operasi (double angkaPertama, double angkaKedua, int operatorKalkulasi) {
    switch (operatorKalkulasi) {
    	case 'a':
    		return sinusS (angkaKedua);
    	case 'b':
    		return cosinus (angkaKedua);
    	case 'c':
    		return tangen (angkaKedua);
    	case 'j':
    		return cosecan (angkaKedua);
    	case 'e':
    		return secan (angkaKedua);
    	case 'f':
    		return cotangen (angkaKedua);
    	case 'g':
    		return logbase10 (angkaKedua);
    	case 'h':
    		return ln (angkaKedua);
    	case 'v':
    		return akar (angkaKedua, angkaPertama);
    	case 'k':
    		return mutlak (angkaKedua);
    	case 'd':
    		return modulus (angkaPertama, angkaKedua);
    	case '!':
    		return faktorial (angkaKedua);
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
            return persen (angkaKedua);
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
        case 'v':
        case '!':
    	case '%':
        case 'a':
        case 'b':
        case 'c':
        case 'j':
        case 'e':
    	case 'f':
        case 'g':
        case 'h':
        case 'k':
            return 3;
        default:
        	return -1;
        	break;
    }
}



void push(Stack* ss, char x) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = ss->top;
    ss->top = newNode;
}

void pushAngka(Stack* ss, double x) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->dataNumber = x;
    newNode->next = ss->top;
    ss->top = newNode;
}

char pop(Stack* ss) {
    if (isEmpty(ss)) {
        printf("Stack underflow!\n");
        return '\0'; // or any other suitable error value
    }
    Node* temp = ss->top;
    char data = temp->data;
    ss->top = temp->next;
    free(temp);
    return data;
}

double popAngka(Stack* ss) {
    if (isEmpty(ss)) {
        printf("Stack underflow!\n");
        return 0.0; // or any other suitable error value
    }
    Node* temp = ss->top;
    double data = temp->dataNumber;
    ss->top = temp->next;
    free(temp);
    return data;
}

int isEmpty(Stack* ss) {
    return (ss->top == NULL);
}



//void push (STACK * ss, char x) {
//	ss->stack[++ss->stackTop] = x;
//}
//
//void pushAngka (STACK * ss, double x) {
//	ss->stackNumber[++ss->stackNumberTop] = x;
//}
//
//char pop (STACK *ss) {
//	return ss->stack[ss->stackTop--];
//}
//
//double popAngka (STACK * ss) {
//	return ss->stackNumber[ss->stackNumberTop--];
//}
//
//int isEmpty (STACK * ss) {
//	if(ss->stackTop == -1) {
//        return 1;
//    }
//	else {
//        return 0;
//    }
//}

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

char *negatifBilangan(char *string) {
    int i = 0, j;
    char *stringSem;
    while (string[i] != '\0') {
        if ((!isdigit(string[i-1]) && string[i-1] != ')') && string[i] == '-' && isdigit(string[i+1]) && string[i-1] != 'e' && (string[i-3] != 'p' && string[i-2] != 'h' && string[i-1] != 'i')) {
            char minus[] = "-", bukaKurung[] = "(", tutupKurung[] = ")";
            stringSem = malloc(strlen(string) + 4);
            if (stringSem == NULL) {
                return NULL; // Error: Failed to allocate memory
            }
            strncpy(stringSem, string, i);
            stringSem[i] = '\0';
            strcat(stringSem, bukaKurung);
            strcat(stringSem, "0");
            strcat(stringSem, minus);
            j = 1;
            while (isdigit(string[i+j])) {
                strncat(stringSem, &string[i+j], 1);
                j++;
            }
            strcat(stringSem, tutupKurung);
            strcat(stringSem, &string[i+j]);
            strcpy(string, stringSem);
            free(stringSem);
            i += 3;
        }
        i++;
    }
    return string;
}

int isSaintifik (char operatorSaintifik) {
    if(operatorSaintifik == 'a' || operatorSaintifik == 'b' || operatorSaintifik == 's' || operatorSaintifik == 'p' || operatorSaintifik == 'h' ||operatorSaintifik == 'c' || operatorSaintifik == 'o' || operatorSaintifik == 's' || operatorSaintifik == 't' || operatorSaintifik == 'e' || operatorSaintifik == 'n' || operatorSaintifik == 'i' || operatorSaintifik == 'l') {
    	return 1;
	}
    else {
    	return 0;
	}
}

double kalkulasi(char * outputOperasi, char * inputOperasi) {
	Stack s;
    s.top = NULL;
//	s.stackTop = -1;
//	s.stackNumberTop = -1;
    char postfix[100], inputOperasiSem[256], operatorOperasi, ch, phiInput[30] = "3.14159265358979323846", eInput[10] = "2.71828";
	int i = 0, j = 0, k = 0;
	double angkaPertama, angkaKedua;
	
	printf ("\nraw input: %s\n", inputOperasi); getch ();
    strcpy (inputOperasi, perbaikiString (inputOperasi));
	strcpy (outputOperasi, inputOperasi);
    strcpy (inputOperasi, negatifBilangan (inputOperasi));
	
	printf ("\nmodified input: %s\n", inputOperasi); getch ();
	
    while (inputOperasi[i]) {
    	if (inputOperasi[i] == ' ') continue;
//    	else if (!isdigit(inputOperasi[i]) && !isSaintifik(inputOperasi[i]) && inputOperasi[i] != '.' && inputOperasi[i] != '+') return;
    	else if (isdigit(inputOperasi[i])) {
			while (isdigit(inputOperasi[i]) || inputOperasi[i] == '.') {
            	postfix[j++] = inputOperasi[i++];
			}
			postfix[j++] = ' ';
			i--;
		}
		else if (inputOperasi[i] == '(') {
			push (&s, inputOperasi[i]);
		}
		else if (inputOperasi[i] == ')') {
			while (s.top->data != '(' && !isEmpty(&s)) {
					ch = pop (&s);
					postfix[j++] = ch;
					postfix[j++] = ' ';
			}
            pop (&s);
		}
		else {
			if ((inputOperasi[i] == 's' || inputOperasi[i] == 'S') && (inputOperasi[i+1] == 'i'|| inputOperasi[i+1] == 'I') && (inputOperasi[i+2] == 'n' || inputOperasi[i+2] == 'N')) {
				i = i + 2;
				push (&s, 'a');
			}
			else if ((inputOperasi[i] == 'c' || inputOperasi[i] == 'C') && (inputOperasi[i+1] == 'o' || inputOperasi[i+1] == 'O') && (inputOperasi[i+2] == 's' || inputOperasi[i+2] == 'S') && (inputOperasi[i+3] != 'e' && inputOperasi[i+3] != 'E')) {
				i = i + 2;
				push (&s, 'b');
			}
			else if ((inputOperasi[i] == 't' || inputOperasi[i] == 'T') && (inputOperasi[i+1] == 'a' || inputOperasi[i+1] == 'A') && (inputOperasi[i+2] == 'n' || inputOperasi[i+2] == 'N')) {
				i = i + 2;
				push (&s, 'c');
			}
			else if ((inputOperasi[i] == 'c' || inputOperasi[i] == 'C') && (inputOperasi[i+1] == 'o' || inputOperasi[i+1] == 'O') && (inputOperasi[i+2] == 's' || inputOperasi[i+2] == 'S') && (inputOperasi[i+3] == 'e' || inputOperasi[i+3] == 'E') && (inputOperasi[i+4] == 'c' || inputOperasi[i+4] == 'C')) {
				i = i + 4;
				push (&s, 'j');
			}
			else if ((inputOperasi[i] != 'o' || inputOperasi[i] != 'O') && (inputOperasi[i] == 's' || inputOperasi[i] == 'S') && (inputOperasi[i+1] == 'e' || inputOperasi[i+1] == 'E') && (inputOperasi[i+2] == 'c' || inputOperasi[i+2] == 'C')) {
				i = i + 2;
				push (&s, 'e');
			}
			else if ((inputOperasi[i] == 'c' || inputOperasi[i] == 'C') && (inputOperasi[i+1] == 'o' || inputOperasi[i+1] == 'O') && (inputOperasi[i+2] == 't') || inputOperasi[i+2] == 'T') {
				i = i + 2;
				push (&s, 'f');
			}
			else if ((inputOperasi[i] == 'l' || inputOperasi[i] == 'L') && (inputOperasi[i+1] == 'o' || inputOperasi[i+1] == 'O') && (inputOperasi[i+2] == 'g' || inputOperasi[i+2] == 'G')) {
				i = i + 2;
				push (&s, 'g');
			}
			else if ((inputOperasi[i] == 'l' || inputOperasi[i] == 'L') && (inputOperasi[i+1] == 'n' || inputOperasi[i+1] == 'N')) {
				i = i + 1;
				push (&s, 'h');
			}
			else if ((inputOperasi[i] == 'p' || inputOperasi[i] == 'P') && (inputOperasi[i+1] == 'h' || inputOperasi[i+1] == 'H') && (inputOperasi[i+2] == 'i' || inputOperasi[i+2] == 'I')) {
				if (isdigit(inputOperasi[i-1])) {
					if (!isEmpty(&s) && prioritas(s.top->data) >= prioritas('*')) {
						ch = pop (&s);
						postfix[j++] = ch;
						postfix[j++] = ' ';
					}
					push (&s, '*');
				}
				i = i + 2;
//				while (isdigit(phiInput[k]) || phiInput[k] == '.') {
				while (phiInput[k]) {
//				while (k < 18) {
	            	postfix[j++] = phiInput[k];
					k++;
				}
//				postfix[j++] = ' ';
				k = 0;
//				i--;
				if (isdigit(inputOperasi[i+1])) {
					if (!isEmpty(&s) && prioritas(s.top->data) >= prioritas('*')) {
						ch = pop (&s);
						postfix[j++] = ch;
					}
					postfix[j++] = ' ';
					push (&s, '*');
				}
			}
			else if ((inputOperasi[i-1] != 's' || inputOperasi[i-1] != 'S') && (inputOperasi[i] == 'e' || inputOperasi[i] == 'E') && (inputOperasi[i+1] != 'c' || inputOperasi[i+1] != 'C')) {
				if (isdigit(inputOperasi[i-1])) {
					if (!isEmpty(&s) && prioritas(s.top->data) >= prioritas('*')) {
						ch = pop (&s);
						postfix[j++] = ch;
						postfix[j++] = ' ';
					}
					push (&s, '*');
				}
				while (eInput[k]) {
	            	postfix[j++] = eInput[k];
					k++;
				}
				k = 0;
				if (isdigit(inputOperasi[i+1])) {
					if (!isEmpty(&s) && prioritas(s.top->data) >= prioritas('*')) {
						ch = pop (&s);
						postfix[j++] = ch;
					}
					postfix[j++] = ' ';
					push (&s, '*');
				}
			}
			else if ((inputOperasi[i] == 'a' || inputOperasi[i] == 'A') && (inputOperasi[i+1] == 'b' || inputOperasi[i+1] == 'B') && (inputOperasi[i+2] == 's' || inputOperasi[i+2] == 'S')) {
				i = i + 2;
				push (&s, 'k');
			}
			else if ((inputOperasi[i] == 'm' || inputOperasi[i] == 'M') && (inputOperasi[i+1] == 'o' || inputOperasi[i+1] == 'O') && (inputOperasi[i+2] == 'd' || inputOperasi[i+2] == 'D')) {
				i = i + 2;
				push (&s, 'd');
			}
			else {
	            while (!isEmpty(&s) && prioritas(s.top->data) >= prioritas(inputOperasi[i])) {
					ch = pop (&s);
					postfix[j++] = ch;
					postfix[j++] = ' ';
	            }
	            push (&s, inputOperasi[i]);
        	}
		}
		i++;
	}
	while (!isEmpty(&s)) {
		ch = pop (&s);
		postfix[j++] = ch;
		postfix[j++] = ' ';
	}
	postfix[j--] = '\0';
	
	printf ("\nafter shunting yard, before tree: %s\n", postfix); getch();
	
	addr treeRoot = createTreeFromPostfix (postfix);
	double result = calculateTreeExpression(treeRoot);
	return result;
}

addr createNode(double opValue, bool isOperand) {
    addr _newNode = nil;
    AlokasiMemoriNode(&_newNode);

    if (_newNode != nil) {
        opVal(_newNode) = opValue;
        isOperand(_newNode) = isOperand;
        left(_newNode) = nil; // Set left pointer to nil
        right(_newNode) = nil; // Set right pointer to nil
    }

    return _newNode;
}

void AlokasiMemoriNode (addr* _newNode) {
    *(_newNode) = (addr)malloc(sizeof(NodeBinTree));
}

addr insertNodeToTree (double opValue, bool isOperand, addr root) {
    addr newNode;

    // jika root tsb. NULL, buat sebuah node dan kembalikan alamat node tsb. berada
    if (root == nil) {
        return createNode(opValue, isOperand);
    }

    // jika pointer right bernilai NULL ataupun right bukan digit/operand
    // kunjungi daerah sub-tree kanan untuk diisi node baru
    if (right(root) == nil || !isOperand(right(root))) {
        newNode = insertNodeToTree(opValue, isOperand, right(root));
        if (newNode != nil) {
            // hubungkan node baru dengan parentnya
            right(root) = newNode;
            return root;
        }
    }

    // jika pointer left bernilai NULL ataupun left bukan digit/operand, 
    // DAN nilai node root bukan karakter '-' ataupun '#'
    // kunjungi daerah sub-tree kiri untuk diisi node baru
    
    if (opVal(root) != '!' && opVal(root) != '%' && opVal(root) != 'a' && opVal(root) != 'b' && opVal(root) != 'c' && opVal(root) != 'j' && opVal(root) != 'e' && opVal(root) != 'f' && opVal(root) != 'g' && opVal(root) != 'h' && opVal(root) != 'k' && (left(root) == nil || !isOperand(left(root)))) {
        newNode = insertNodeToTree(opValue, isOperand, left(root));
        if (newNode != nil) {
            // hubungkan node baru dengan parentnya
            left(root) = newNode;
            return root;
        }
    }

    // jika tidak memenuhi 3 kriteria di atas, kembalikan nilai NULL
    return nil;
}

void printTree (addr root) {
    if (root != nil) {
        if (isOperand(root)) {
            // use fmod to count the remainders of floating number (instead of using % operator)
            if (fmod(opVal(root), 1.00) != 0.00) {
                printf("%.2f", opVal(root));
            } else {
                // print only number without leading zero if it's a whole number
                printf("%.0f", opVal(root));
            }
        } else {
            // tampilkan langsung karakter operator
            printf("%c", (int)opVal(root));
        }

        printf(" ");
        printTree(left(root));
        printTree(right(root));
    }
}

addr createTreeFromPostfix (char* expression) {
    addr tree = nil;
    int i, index;
    char number[40];
    double temp;

    // read every character in expression array one by one from the end to the very first char
    for (i = strlen(expression) - 1; i >= 0; i--) {
        if (expression[i] == ' ') {
      		continue;
   		}

        // masukkan elemen operand/angka ke dalam tree
        if (isdigit(expression[i]) || expression[i] == '.') {
            index = 0;  // indeks pada array of digit character saja
            do {
                // cari digit angka sampai ditemukan karakter non-angka
                number[index++] = expression[i--];
            } while ((i >= 0 && isdigit(expression[i])) || expression[i] == '.');
            number [index] = '\0'; // beri pembatas terminator karena masih dalam bentuk array

            // ubah string number yang dibalik ke dalam bilangan bertipe double
            temp = strtod(strrev(number), NULL); 
            // masukkan elemen digit pada array temp ke dalam tree (karena bisa jadi digit lebih dari satu)
            tree = insertNodeToTree(temp, true, tree);
        }
		
		
        // langsung masukkan elemen operator ke dalam tree
        else {
            tree = insertNodeToTree(expression[i], false, tree);
        }
        
    }
    printf ("\nTree: ");
    printTree (tree); getch ();
    return tree;
}

double calculateTreeExpression(addr root) {
	double rightNumber, leftNumber;
	
//	printf ("\noperator (sebelum pengecekan isOperand): %c\n", (int)(opVal(root))); getch ();
    // Ditemui element node merupakan digit operand
	if (isOperand(root)) {
    	return opVal(root);
	}
	
	printf ("\noperator: %c\n", (int)(opVal(root))); getch ();
	// Menelusuri sub-tree kanan secara rekursif hingga ditemui operand
    
	if (opVal(root) == '!' || opVal(root) == '%' || opVal(root) == 'a' || opVal(root) == 'b' || opVal(root) == 'c' || opVal(root) == 'j' || opVal(root) == 'e' || opVal(root) == 'f' || opVal(root) == 'g' || opVal(root) == 'h' || opVal(root) == 'k') {
		
	    if (right(root) != NULL) {
			printf ("\nRight\n"); getch ();
			rightNumber = calculateTreeExpression(right(root));
	    	
		}
		if (left(root) != NULL) {
			printf ("\nLeft\n"); getch ();
    		leftNumber = calculateTreeExpression(left(root));
		}
	}
	else {
		rightNumber = calculateTreeExpression(right(root));
    	leftNumber = calculateTreeExpression(left(root));
	}	
	
	printf ("\noperand :%g %g\n", leftNumber, rightNumber); getch();
	
    return operasi (leftNumber, rightNumber, (int)(opVal(root)));
}
