#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double a, b, c;
	char fname[20];
	FILE* fp;
	printf("input filename->");
	scanf_s("%s", fname);
	fopen_s(&fp, fname, "r");
	if (fp == NULL) {
		printf("Can not open the file!\n");
		exit(1);
	}
	fscanf_s(fp, "%lf,%lf,%lf", &a, &b, &c);
	fclose(fp);
	printf("a=%f b=%f c=%f\n", a, b, c);
	return 0;
}