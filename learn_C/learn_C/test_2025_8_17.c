#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Compare(double x, double y)
{
	if (x >= y)
	{
		printf("更大的数字是x:%lf\n", x);
	}
	else
	{
		printf("更大的数字是y: %lf\n", y);
	}
	return 0;
}
int main()
{
	double x = 0;
	double y = 0;
	scanf("请输入你要比较的俩个数：%lf,%lf", &x, &y);
	Compare(x, y);
	return 0;
}