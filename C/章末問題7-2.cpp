#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ユークリッドの互除法を用いて最大公約数を求める関数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {
    int a, b;
    printf("a -> "); scanf("%d", &a);
    printf("b -> "); scanf("%d", &b);

    // 最大公約数を計算
    int result = gcd(a, b);

    // 結果を表示
    printf("最大公約数: %d\n", result);

    return 0;
}