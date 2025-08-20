#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern double Compare(double x, double y);

int main()
{
	double x = 0;
	double y = 0;
	printf("请输入你要比较的俩个数:");
	scanf("%lf %lf", &x, &y);
	Compare(x, y);
	return 0;
}