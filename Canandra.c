#include "Canandra.h"
#include <stdio.h>

	//perkalian
	float perkalian(float x, float y)
	{
		float hasil;
		hasil = x*y;
		return(hasil);
	}
	
	//sinus
	float sinus(float x, int a)
	{
		float t = x;
		float sin = t;
		int b;
		for ( b=1; b<a; b++)
		{
			float kali = -x*x/((2*b+1)*(2*b));
			t *= kali;
			sin += t;
		}
		return sin;
	}
	
	float convert(float x)
	{
		return x/57.0;
	}
