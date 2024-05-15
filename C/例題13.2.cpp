#include <stdio.h>
int main(void)
{
	double a, b, c;
	FILE* fp;
	fopen_s(&fp, "test1.txt", "r");
	fscanf_s(fp, "%lf,%lf,%lf", &a, &b, &c);
	fclose(fp);
	printf("a=%f b=%f c=%f\n", a, b, c);
	return 0;
}