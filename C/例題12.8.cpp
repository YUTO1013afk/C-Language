#include <stdio.h>
#include <time.h>
#include <math.h>
int main(void)
{
	int i, j, dt;
	double a, b;
	time_t start, end;

	time(&start);	/* ���������̓��� */
	for (i = 1; i <= 2000; i++) {
		for (j = 0;j <= 10000; j++) {
			a = sin(0.5);
			b = cos(0.5);
		}
	}
	time(&end); /* �I�������̓��� */
	dt = difftime(end, start);	/*�@�v�Z���Ԃ̌v�Z */
	printf("run time = %d (sec)\n", dt);
	return 0;
}