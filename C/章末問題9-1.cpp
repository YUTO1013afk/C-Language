#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5
double keisan(double a[N]);
int main(void)
{
	int i;
	double a[N], mult;
	/* �z��Ƀf�[�^����͂��� */
	for (i = 0; i <= N - 1; i++)
	{
		printf("a[%d] = ", i);
		scanf("%lf", &a[i]);
	}
	 printf("\n");
	 mult = keisan(a);
	 printf("mult = %f\n", mult);
	 return 0;
}

/* ���ς����߂�֐� */
double keisan(double a[N])
{
	int i;
	double mult = 1.0;
	for (i = 0; i <= N - 1; i++) {
		mult *= a[i];
	}
	return mult;
}