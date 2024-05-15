#include <stdio.h>

int main(void) {
    int n = 10;
    int x1 = 1, x2 = 1, xn;

    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);

    for (int i = 3; i <= n; i++) {
        xn = x1 + x2;
        printf("x%d = %d\n", i, xn);
        x1 = x2;
        x2 = xn;
    }

    return 0;
}
