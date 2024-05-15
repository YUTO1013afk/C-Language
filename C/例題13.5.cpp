#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	double x[20], y[20];
	FILE* fp;
	fopen_s(&fp,"test2.txt","r");
	if (fp == NULL) {
		printf("Can not open the file!\n");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < 20; i++) {
		fscanf_s(fp, "%lf,%lf", &x[i], &y[i]);
	}
	fclose(fp);
	for (i = 0; i < 20; i++) {
		printf("x[%d]=%f  y[%d]=%f\n", i, x[i], i, y[i]);
	}
	return 0;
}