#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i;
	double y;
	FILE* fp;
	fopen_s(&fp,"test2.txt", "w");
	srand(time(NULL));
	for (i = 0; i < 20; i++) {
		y = (double)rand() / (double)RAND_MAX;
		fprintf(fp, "%d,%f\n", i, y);
		printf("%d,%f\n", i, y);
	}
	fclose(fp);
	return 0;
}