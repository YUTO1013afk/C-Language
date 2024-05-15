#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 0;
    int n;
    int sum = 0;

    printf("®”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢-> ");
    scanf("%d",&n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("1‚©‚ç%d‚Ü‚Å‚Ì‡Œv %d\n",n, sum);
    return 0;
}
