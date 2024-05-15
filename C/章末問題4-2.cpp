#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int k;
	int MAX = 15;
	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ -> ");
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