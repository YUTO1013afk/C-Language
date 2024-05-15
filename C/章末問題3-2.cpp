#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j; 
	double x, y;
	printf("input i-> "); scanf("%d", &i);
	printf("input j-> "); scanf("%d", &j);
	printf("input x-> "); scanf("%lf", &x);
	printf("input y-> "); scanf("%lf", &y);
	printf("\n");
	printf("i+j = %d\n", i + j);
	printf("i-j = %d\n", i - j);
	printf("x*y = %.1f\n", x * y);
	printf("x/y = %.1f\n", x / y);
}