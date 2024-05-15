#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i;
	double x, y;
	char fname[20];
	FILE* fp;
	printf("input filename : ");
	scanf("%s", fname);
	fp = fopen(fname, "w");
	for (i = 0; i <= 70; i++) {
		x = (double)i / 10.0;
		y = sin(x);
		fprintf(fp, "%f,%f\n", x, y);
		printf("%f,%f\n", x, y);
	}
	fclose(fp);
	return 0;
}