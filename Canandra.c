#include "Canandra.h"
#include <stdio.h>
#define n 50
#define LN10 2.3025850929940456840179914546844

	//MENu
	void menu()
	{
		printf("1.Perkalian\n");
		printf("2.Sin\n");
		printf("3.Cosec\n");
		printf("4.Logaritma");
	}

	
	//perkalian
	float perkalian(float x, float y)
	{

		float hasil;
		return hasil = x*y;
	}
	
		float sinus(float x) //sin
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
	
	float cosec(float x) //cosec
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
	
