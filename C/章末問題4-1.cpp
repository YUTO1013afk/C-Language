#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int num;
	printf("整数を入力してください -> ");
	scanf("%d",&num);
	if (num % 2 == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}
	return 0;
}