#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 16

int main(void)
{
	int k;
	printf("整数を入力してください -> ");
	scanf("%d", &k);
	if (k < MAX) {
		printf("small");
	}
	else if (k == MAX) {
		printf("equal");
	}
	else {
		printf("large");
	}
	return 0;
}