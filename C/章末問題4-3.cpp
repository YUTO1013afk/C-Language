#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int year;
	printf("西暦を入力してください -> ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("閏年");
	}
	else {
		printf("閏年ではない");
	}
	return 0;
}