#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���[�N���b�h�̌ݏ��@��p���čő���񐔂����߂�֐�
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

    // �ő���񐔂��v�Z
    int result = gcd(a, b);

    // ���ʂ�\��
    printf("�ő����: %d\n", result);

    return 0;
}