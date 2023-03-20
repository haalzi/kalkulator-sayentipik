#include "Hafidzon.h"

int main() {
	float a, b, hsl;
	int i;
	printf("Masukan operasi yang diinginkan\n 1. Bagi\n 2. Exponen\n 3. Faktorial\n 4. Tangen\n 5. Cotangen\n");
	scanf("%d", &i);
	switch(i) {
		case 1:
			printf("Masukan angka yang ingin dibagi\t:\t");
			scanf("%f", &a);
			printf("\nMasukan angka pembagi\t:\t");
			scanf("%f", &b);
			hsl = bagi((double)a, (double)b);
			printf("\n%g / %g\t:\t%.2f", a, b, hsl);

			break;

		case 2:
			printf("Masukan angka yang ingin di exponenkan\t");
			scanf("%f", &a);
			printf("Masukan berapa kali exponen\t");
			scanf("%d", &i);
			hsl = exponen((double)10, i);
			hsl = hsl * a;
			printf("\n%g exp %d\t:\t%.2f", a, i, hsl);
			break;

		case 3:
			printf("Masukan angka yang ingin di faktorialkan\t");
			scanf("%f", &a);
			hsl = fact(a);
			printf("\nFaktorial dari %g\t:\t%.2f", a, hsl);
			break;

		case 4:
			printf("Masukan angka yang ingin di tangentkan\t");
			scanf("%f", &a);
			hsl = tangen((double)a);
			if(a == 180 || a == 360) {
				printf("\nTangent dari %g\t:\t%lf", a, abs(hsl));
			}
			if(a == 90 || a == 270) {
				printf("\nTangent dari %g adalah tidak hingga", a);
			} else {
				printf("\nTangent dari %g\t:\t%lf", a, hsl);
			}
			break;

		case 5:
			printf("Masukan angka yang ingin di cotangentkan\t");
			scanf("%f", &a);
			hsl = 1/tangen(a);
			if(hsl == 0) {
				hsl = abs(hsl);
			} else if(a == 0 || a == 180 || a == 360) {
				printf("\nCoTangent dari %g adalah tidak hingga", a);
			} else {
				printf("\nCoTangent dari %g\t:\t%lf", a, hsl);
			}
			break;

		case 6:
			printf("Masukan angka yang ingin diabsolutkan\t");
			scanf("%f", &a);
			hsl = mutlak(a);
			printf("\nMutlak dari %g adalah %.f", a, hsl);
			break;

		case 7:
			scanf("%f", &a);
			hsl = sinus(a);
			printf("\nSinus dari %g\t:\t%lf", a, hsl);
			break;
			
		case 8:
			scanf("%f", &a);
			hsl = cosinus(a);
			printf("\nCosinus dari %g\t:\t%lf", a, hsl);
			break;
		default:
			main();
			break;
	}
	return 0;
}