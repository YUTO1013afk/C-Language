#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double x, y;
	printf("������̏d������͂��Ă������� -> ");
	scanf_s("%lf", &y);
	x = y / 40.0;
	printf("������̏d�� %fg	�΂˂̐L�� %fcm", y, x);
	return 0;
}