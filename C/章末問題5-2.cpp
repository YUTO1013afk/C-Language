#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 0;
    int n;
    int sum = 0;

    printf("整数値を入力してください-> ");
    scanf("%d",&n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
