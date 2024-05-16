#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define sqr(a) ((a)*(a))

int main(void)
{
	int x, y, plus, mult;
	double div;

	printf("x -> "); scanf("%d", &x);
	printf("y -> "); scanf("%d", &y);
	printf("\n");

	plus = sqr(x) + sqr(y);
	mult = sqr(x) * sqr(y);
	div = (double)sqr(x) / (double)sqr(y);

	printf("sqr(x)+sqr(y) = %d\n", plus);
	printf("sqr(x)*sqr(y) = %d\n", mult);
	printf("sqr(x)/sqr(y) = %f\n", div);

	return 0;
}