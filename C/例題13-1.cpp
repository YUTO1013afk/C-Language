#include <stdio.h>
int main(void)
{
	double x = 12.3, y = 45.6, z = 78.9;
	FILE* fp;
	fopen_s(&fp,"test1.txt", "w");
	fprintf(fp, "%f,%f,%f\n", x, y, z);
	printf("%f,%f,%f\n", x, y, z);
	fclose(fp);
	return 0;
}