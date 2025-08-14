#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int x = 0;
	int y =0;
	printf("请输入你要计算的数字：");
	scanf("%d %d", &x, &y);
	int sum = Add(x, y);
	printf("和为：%d", sum);
	return 0;
}
