#include <stdio.h>
#include <stdlib.h>
#include "exp.h"

float bagi(double x, double y)
{
	return x/y;
}

float exponen(float x,int y){
    if(y<0)
        return 1 / exponen (x,-y);
    else if(y==0)
        return 1;
    else if(y==1)
        return x;
	else
        return x*exponen(x,y-1);
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