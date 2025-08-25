#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 计算余数的函数
int getRemainder(int a, int b) {
    return a % b;
}

// 计算商的函数
int getQuotient(int a, int b) {
    return a / b;//C语言只能返回一个值
}

int main() {
    int a = 0;
    int b = 0;
    int quotient = 0;  // 商
    int remainder = 0; // 余数

    printf("请输入您要计算的数a(a>0),b(b<10000)\n");
    scanf("%d %d", &a, &b);

    // 分别调用函数获取结果
    remainder = getRemainder(a, b);
    quotient = getQuotient(a, b);

    printf("余数：%d 商：%d\n", remainder, quotient);
    return 0;
}
