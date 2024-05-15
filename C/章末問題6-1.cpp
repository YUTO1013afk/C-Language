#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, ans, rad;
	printf("x = ");
	scanf("%lf",&x);
	rad = 3.14 * x / 180.0;
	ans = sin(rad);
	printf("sin(x) = %f\n", ans);
	return 0;
}