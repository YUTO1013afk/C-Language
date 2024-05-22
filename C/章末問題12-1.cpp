#include <stdio.h>

struct baseball {
    const char* name;
    double ave;
    int homer;
};

int main(void)
{
    int i;
    struct baseball s[3];
    s[0].name = "Matsui";
    s[0].ave = 0.281;
    s[0].homer = 12;
    s[1].name = "Ichiro";
    s[1].ave = 0.361;
    s[1].homer = 4;
    s[2].name = "Takahashi";
    s[2].ave = 0.295;
    s[2].homer = 8;

    printf("%-10s %-6s %6s\n", "name", "ave", "homer");
    for (i = 0; i < 3; i++) {
        printf("%-10s %-7.3f %3d\n", s[i].name, s[i].ave, s[i].homer);
    }
    return 0;
}