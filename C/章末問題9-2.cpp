#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 2
void keisan(int a[N][N], int b[N], int c[N]);
int main(void)
{
	int i, j, x, a[N][N], b[N], c[N];
	for (i = 0; i <= N - 1; i++) {
		for (j = 0; j <= N - 1; j++) {
			printf("a[%d][%d]= ", i, j); scanf("%d", &x);
			a[i][j] = x;
		}
	}
	for (i = 0; i <= N - 1; i++) {
		printf("b[%d] = ", i);
		scanf("%d", &x);
		b[i] = x;
	}

	printf("\n");
	keisan(a, b, c);
	for (i = 0; i <= N - 1; i++) {
		printf("c[%d] = %d\n", i, c[i]);
	}
	return 0;
}
void keisan(int a[N][N], int b[N], int c[N])
{
	int i, j;
	for (i = 0; i <= N - 1; i++) {
		c[i] = 0;
		for (j = 0; j <= N - 1; j++) {
			c[i] += a[i][j] * b[j];
		}
	}
}