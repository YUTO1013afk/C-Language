#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int num;
	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ -> ");
	scanf("%d",&num);
	if (num % 2 == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}
	return 0;
}