#include <stdio.h>
#include <stdlib.h>
#include "exp.h"
#define pi 3.14159265358979323846

float bagi(double x, double y)
{
	return (float)x/y;
}

float exponen(double x,int y)
{
	return pow(x, y);
}

float fact(float n)
{
	int x;
	float fact = 1;
       for(x=1;x<=n;x++)
   {
    	fact=fact*x; 
   }
   return fact;
}

float tangen(float x)
{
	x = (x * pi / 180.0);
    x = tan(x);
	return x;
}

float mutlak(float x)
{
	return abs(x);
}