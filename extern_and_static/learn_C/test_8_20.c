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
}