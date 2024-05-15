#include <stdio.h>
#include <time.h>
#include <math.h>
int main(void)
{
	int i, j, dt;
	double a, b;
	time_t start, end;

	time(&start);	/* 初期時刻の入力 */
	for (i = 1; i <= 2000; i++) {
		for (j = 0;j <= 10000; j++) {
			a = sin(0.5);
			b = cos(0.5);
		}
	}
	time(&end); /* 終了時刻の入力 */
	dt = difftime(end, start);	/*　計算時間の計算 */
	printf("run time = %d (sec)\n", dt);
	return 0;
}