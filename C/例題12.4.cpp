#include <stdio.h>
#include<math.h>
struct point {      /*�\���̐錾*/
    double x;       /* x���W */
    double y;       /* y���W */
};
double kyori(struct point p[2]);

int main(void)
{
    struct point p[2];
    for (int i = 0; i < 2; i++) {   /* �f�[�^�̓��� */
        printf("x%d = ", i);
        scanf_s("%lf", &p[i].x);
        printf("y%d = ", i);
        scanf_s("%lf", &p[i].y);
    }
    double d = kyori(p);
    printf("kyori = %f\n", d);
    return 0;
}

double kyori(struct point p[2]) /*�\���̈���*/
{
    double seki, nagasa;
    seki = (p[1].x - p[0].x) * (p[1].x - p[0].x) + (p[1].y - p[0].y) * (p[1].y - p[0].y);
    nagasa = sqrt(seki);
    return nagasa;
}
