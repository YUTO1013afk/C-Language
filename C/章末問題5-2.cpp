#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 0;
    int n;
    int sum = 0;

    printf("�����l����͂��Ă�������-> ");
    scanf("%d",&n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("1����%d�܂ł̍��v %d\n",n, sum);
    return 0;
}
