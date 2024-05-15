#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t current;
	struct tm* local;
	time(&current);
	local = localtime(&current);
	printf("%4d ”N%02d ŒŽ%02d “ú \n", local->tm_year + 1900,/* ”N */local->tm_mon+1,/* ŒŽ */local->tm_mday); /* “ú */
	return 0;
}