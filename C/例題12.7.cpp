#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t current;
	struct tm* local;
	time(&current);
	local = localtime(&current);
	printf("%4d 年%02d 月%02d 日 \n", local->tm_year + 1900,/* 年 */local->tm_mon+1,/* 月 */local->tm_mday); /* 日 */
	return 0;
}