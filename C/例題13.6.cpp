#include <stdio.h>
int main(void)
{
	double x = 12.3, y;
	FILE* fp;
	fopen_s(&fp, "testrw.bin", "wb");
	fwrite(&x, sizeof(double), 1, fp);
	fclose(fp);

	fopen_s(&fp, "testrw.bin", "rb");
	fread(&y, sizeof(double), 1, fp);
	fclose(fp);

	printf("x=%f, y=%f", x, y);
	return 0;
}