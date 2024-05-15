#include <stdio.h>
#include <time.h>
#include <math.h>
int main(void)
{
	int i, j;
	double a, b, dt;
	clock_t start, end;

	start = clock();	/* 初期時刻の入力 */
	for (i = 1; i <= 2000; i++) {
		for (j = 0;j <= 10000; j++) {
			a = sin(0.5);
			b = cos(0.5);
		}
	}
	end = clock(); /* 終了時刻の入力 */
	dt = (double)(end-start) / CLOCKS_PER_SEC;	/*　計算時間の計算 */
	printf("run time = %f (sec)\n", dt);
	return 0;
}