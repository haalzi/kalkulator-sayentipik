#include "Canandra.h"

//MENu
void menuCanandra()
{
	float a, b, c, hasil;
	char opt1;
	
	printf("1.Perkalian\n");
	printf("2.Sin\n");
	printf("3.Cosec\n");
	printf("4.Logaritma\n");
	printf("5.Diskriminan\n");
	printf("6.Permutasi");
	inputKarakter (&opt1);
	
	switch (opt1)
	{
//		case '1':
//			printf("PERKALIAN\n\n");
//			printf("Masukkan angka pertama : ");
//			scanf("%g", &a);
//			printf("Masukkan angka kedua :");
//			scanf("%g", &b);
//			hasilx = perkalian(a,b);
//			printf("Hasilnya adalah : %g", hasilx);
//			break;

		case '2':
			printf("SIN\n");
			printf("Masukkan derajat : ");
			inputAngka (&a);
			a = (3.1415926535897931*a)/180.0;
			sinus(a);
			hasil = sinus(a);
			printf("SIN(%g) = %f\n", a, hasil);
			break;

		case '3':
			printf("COSEC\n");
			printf("Masukkan derajat : ");
			inputAngka (&a);
			a = (3.1415926535897931*a)/180.0;
			cosec(a);
			hasil = 1/cosec(a);
			printf("COSEC(%g) = %f\n", a, hasil);
			break;

		case '4':
			printf("LOGARITMA\n");
			printf("Masukkan sebuah angka : ");
			inputAngka (&b);
			a = logbase10(b);
			printf("log10(%g) = %f\n", b, a);
			break;

		case '5':
			printf("DISKRIMINAN\n");
			printf("Masukkan koefisien :\n");
			printf("b : ");
			inputAngka (&a);
			printf("a : ");
			inputAngka (&b);
			printf("c : ");
			inputAngka (&c);
			diskriminan(a,b,c);
			break;

		case '6':
			printf("PERMUTASI\n");
			printf("Masukkan n :");
			inputAngka (&a);
			printf("Masukkan r :");
			inputAngka (&b);
			permutasi(a,b);
			printf("Permutasi : %g", permutasi(a,b));
			break;
			

		default:
			pesanEror ();
			break;
	}
}


//--------------prekalian
float perkalian(float x, float y)
{
	float hasil;
	return hasil = x*y;
}

	//---------sin
float sinus(float x)
{
	float hasil;
	float faktorial;
	float pangkat;
	int i,j;
	
	hasil = 0.0;
	for( i = 0; i <= n; i++)
	{
		faktorial = 1.0;
		pangkat = 1.0;
		for(j = 1; j <= 2*i+1; j++)
		{
			faktorial *= j;
			pangkat *= x;
		}
		hasil += ((i%2?-1.0:1.0)/faktorial)*pangkat;
	}
	return hasil;
}

//------------cosec
float cosec(float x)
{
	float hasil;
	float faktorial;
	float pangkat;
	int i,j;

	hasil = 0.0;
	for( i = 0; i <= n; i++)
	{
		faktorial = 1.0;
		pangkat = 1.0;
		for(j = 1; j <= 2*i+1; j++)
		{
			faktorial *= j;
			pangkat *= x;
		}
		hasil += ((i%2?-1.0:1.0)/faktorial)*pangkat;
	}
	return hasil;
}

//------------log baasis 10
float logbase10(float x)
{
	return ln(x) / LN10;
}

float ln(float x)

{
    float old_sum = 0.0;
    float xmlxpl = (x - 1) / (x + 1);
    float xmlxpl_2 = xmlxpl * xmlxpl;
    float denom = 1.0;
    float frac = xmlxpl;
    float term = frac;
    float sum = term;

    while ( sum != old_sum )
    {
        old_sum = sum;
        denom += 2.0;
        frac *= xmlxpl_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}

//-------------------------diskriminan
float diskriminan(float x, float y, float z)
{
	float Diskriminan;
	float akar1, akar2, real, imajiner;
	
	Diskriminan = x*x - 4 * y * z;
	if (Diskriminan == 0)
	{
		akar1 = akar2 = -x/(2*y);
		printf("akar1 = akar2 = %.2lf", akar1);
	}
	else if(Diskriminan > 0)
		{
			akar1 = (-x + sqrt(Diskriminan))/(2*y);
			akar2 = (-x - sqrt(Diskriminan))/(2*y);
			printf("akar 1 = %.2lf dan akar 2 = %.lf", akar1, akar2);
		}
		else
		{
			real = -x/(2*y);
			imajiner = sqrt(-Diskriminan)/(2*z);
			printf("akar 1 = %.2lf + %.2lfi dan akar 2 = %.2f-%.2fi", real, imajiner, real, imajiner);
		}
	
}

//--------------------------permutasi
float faktorial(float x)
{
	if (x==0 || x==1)
	{
		return 1;
	}
	else
	
		return x * faktorial(x-1);
}

float permutasi(float x, float y)
{
	return faktorial(x)/faktorial(x-y);
}
