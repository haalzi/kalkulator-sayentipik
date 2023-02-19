#include "Hafidzon.h"

void menuHafidzon () {
	double a, b, hsl;
	char i;
	printf("Masukan operasi yang diinginkan\n 1. Bagi\n 2. Exponen\n 3. Faktorial\n 4. Tangen\n 5. Cotangen\n");
	inputKarakter (&i);
	switch(i)
	{
		case '1':
			printf("Masukan angka yang ingin dibagi\t:\t");
			scanf("%lf", &a);
			printf("\nMasukan angka pembagi\t:\t");
			scanf("%lf", &b);
			hsl = bagi((double)a, (double)b);
			printf("\n %g / %g \t:\t %g", a, b, hsl);
			
			break;
			
		case '2':
			printf("Masukan angka yang ingin di exponenkan\t");
			scanf("%lf", &a);
			printf("Masukan berapa kali exponen\t");
			scanf("%d", &i);
			hsl = exponen(10, i);
			hsl = hsl * a;
			printf("\n%g exp 10 ^ %d\t:\t%.2lf", a, i, hsl);
			
			break;

		case '3':
			printf("Masukan angka yang ingin di faktorialkan\t");
			scanf("%lf", &a);
			hsl = fact(a);
			printf("\nFaktorial dari %g\t:\t%.2lf", a, hsl);
		
			break;
			
		case '4':
			printf("Masukan angka yang ingin di tangentkan\t");
			scanf("%lf", &a);
			hsl = tangen(a);
		    if(a == 90 || a == 270)
    		{
				printf("\nTangent dari %g adalah tidak hingga", a, hsl);
			}
			else
			{
				printf("\nTangent dari %g\t:\t%lf", a, hsl);
			}			
			break;
			
		case '5':
			printf("Masukan angka yang ingin di cotangentkan\t");
			scanf("%lf", &a);
			hsl = 1/tangen(a);
		    if(a == 0 || a == 180)
    		{
				printf("\nCoTangent dari %g adalah tidak hingga", a, hsl);
			}
			else
			{
				printf("\nCoTangent dari %g\t:\t%lf", a, hsl);
			}
			
			break;
			
		default:
//			main();
			break;
	}
}

double bagi(double x, double y)
{
	return (float)x/y;
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

float fact(float x)
{
	int y;
	float fact = 1;
       for(y=1;y<=x;y++)
   {
    	fact=fact*y; 
   }
   return fact;
}

float tangen(float x)
{
	x = (x * pi / 180.0);
    x = tan(x);
	return x;
}
