#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���������ĺ���
int getRemainder(int a, int b) {
    return a % b;
}

// �����̵ĺ���
int getQuotient(int a, int b) {
    return a / b;//C����ֻ�ܷ���һ��ֵ
}

int main() {
    int a = 0;
    int b = 0;
    int quotient = 0;  // ��
    int remainder = 0; // ����

    printf("��������Ҫ�������a(a>0),b(b<10000)\n");
    scanf("%d %d", &a, &b);

    // �ֱ���ú�����ȡ���
    remainder = getRemainder(a, b);
    quotient = getQuotient(a, b);

    printf("������%d �̣�%d\n", remainder, quotient);
    return 0;
}
