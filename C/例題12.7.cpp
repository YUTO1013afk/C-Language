#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t current;
	struct tm* local;
	time(&current);
	local = localtime(&current);
	printf("%4d �N%02d ��%02d �� \n", local->tm_year + 1900,/* �N */local->tm_mon+1,/* �� */local->tm_mday); /* �� */
	return 0;
}