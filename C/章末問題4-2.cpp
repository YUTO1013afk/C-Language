#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int k;
	int MAX = 15;
	printf("整数を入力してください -> ");
	scanf("%d",&k);
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