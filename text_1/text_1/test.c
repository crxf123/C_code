#include <stdio.h>


int Add( num1, num2) 
{
	int sum = 0;
	sum = num1 + num2;
	return sum;
}
int main()
{
	printf("hehe\n");
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum=%d", sum);
		return 0;
}
