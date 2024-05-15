#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double x, y;
	printf("‚¨‚à‚è‚Ìd‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ -> ");
	scanf_s("%lf", &y);
	x = y / 40.0;
	printf("‚¨‚à‚è‚Ìd‚³ %fg	‚Î‚Ë‚ÌL‚Ñ %fcm", y, x);
	return 0;
}