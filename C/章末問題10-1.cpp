#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void keisan(double x, double y, double* multi, double* div);
int main(void) 
{
	double x, y, multi, div;
	printf("x = "); scanf("%lf", &x);
	printf("y = "); scanf("%lf", &y);
	keisan(x, y, &multi, &div);
	printf("x*y = %f\n", multi); printf("x/y = %f\n", div);
	return 0;
}

void keisan(double x, double y, double* multi, double* div)
{
	*multi = x * y;
	*div = x / y;
}