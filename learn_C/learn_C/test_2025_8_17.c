#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Compare(double x, double y)
{
	if (x >= y)
	{
		printf("�����������x:%lf\n", x);
	}
	else
	{
		printf("�����������y: %lf\n", y);
	}
	return 0;
}
int main()
{
	double x = 0;
	double y = 0;
	scanf("��������Ҫ�Ƚϵ���������%lf,%lf", &x, &y);
	Compare(x, y);
	return 0;
}