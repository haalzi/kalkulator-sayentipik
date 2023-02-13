#include <stdio.h>
#include <stdlib.h>
#include "Hafidzon.h"

float bagi(double x, double y)
{
	return x/y;
}

double exponen(double x,int y)
{
    if(y<0)
        return 1 / exponen (x,-y);
    else if(y==0)
        return 1;
    else if(y==1)
        return x;
	else
        return x*exponen(x,y-1);
}