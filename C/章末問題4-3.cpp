#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int year;
	printf("�������͂��Ă������� -> ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("�[�N");
	}
	else {
		printf("�[�N�ł͂Ȃ�");
	}
	return 0;
}