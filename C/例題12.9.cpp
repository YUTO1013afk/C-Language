#include <stdio.h>
#include <time.h>
#include <math.h>
int main(void)
{
	int i, j;
	double a, b, dt;
	clock_t start, end;

	start = clock();	/* ���������̓��� */
	for (i = 1; i <= 2000; i++) {
		for (j = 0;j <= 10000; j++) {
			a = sin(0.5);
			b = cos(0.5);
		}
	}
	end = clock(); /* �I�������̓��� */
	dt = (double)(end-start) / CLOCKS_PER_SEC;	/*�@�v�Z���Ԃ̌v�Z */
	printf("run time = %f (sec)\n", dt);
	return 0;
}