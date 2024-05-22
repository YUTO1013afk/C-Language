#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main(void)
{
	double x, y;
	FILE* fp;
	fp = fopen("curve.csv", "w");
	for (x = 0.0; x <= 2.01; x+=0.1) {
		y = x * x - x + 1;
		fprintf(fp, "%f,%f\n", x, y);
	}
	fclose(fp);
	return 0;
}