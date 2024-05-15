#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double g = 9.8, t, v, y;
    for (t = 0.0; t <= 1.0; t+=0.1) {
        v = g * t;
        y = g * t * t / 2.0;
        printf("Žž %.1f ‘¬“x %f •ÏˆÊ %f\n", t, v, y);
    }
    return 0;
}