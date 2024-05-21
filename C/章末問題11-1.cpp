#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	char* name[5];
	for (i = 0; i < 5; i++) {
		name[i] = (char*)malloc(10 * sizeof(char));
		printf("name[%d]F", i);
		scanf("%s", name[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%s\n", name[i]);
	}

	for (i = 0; i < 5; i++) free(name[i]);
	return 0;
}