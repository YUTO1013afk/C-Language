#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double x, y;
	printf("おもりの重さを入力してください -> ");
	scanf_s("%lf", &y);
	x = y / 40.0;
	printf("おもりの重さ %fg	ばねの伸び %fcm", y, x);
	return 0;
}