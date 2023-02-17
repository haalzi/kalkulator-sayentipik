#include "Canandra.h"
#include <stdio.h>
#define n 40

	//MENu
	void menu()
	{
		printf("1.Perkalian\n");
		printf("2.Sin\n");
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
	
	

	
