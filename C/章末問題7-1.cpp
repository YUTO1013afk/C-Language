#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double keisan(double x, double y);
int main(void)
{
	double x, y, ans;
	printf("x -> "); scanf("%lf", &x);
	printf("y -> "); scanf("%lf", &y);
	ans = keisan(x, y);
	printf("\n");
	printf("ŒvŽZŒ‹‰Ê %f\n", ans);
	return 0;
}

double keisan(double x, double y)
{
	double ans;
	ans = x * x + y * y;
	return ans;
}