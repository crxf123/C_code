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
	printf("��������Ҫ��������֣�");
	scanf("%d %d", &x, &y);
	int sum = Add(x, y);
	printf("��Ϊ��%d", sum);
	return 0;
}
