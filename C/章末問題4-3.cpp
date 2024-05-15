#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int year;
	printf("¼—ï‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ -> ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("‰[”N");
	}
	else {
		printf("‰[”N‚Å‚Í‚È‚¢");
	}
	return 0;
}