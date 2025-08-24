#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Hym
{
	char name[10];//定义数组时如果不进行初始化则需要指定大小
	int age;
	double height;
}h = {"黄元明",22,172};//结构体定义的时候就可以初始化

struct Xt
{
	char name[10];//定义数组时如果不进行初始化则需要指定大小
	int age;
	double height;
}; 

void print(struct Xt* p)
{
	printf("姓名：%s，年龄：%d，身高：%lf\n", (*p).name, (*p).age, (*p).height);//(*p)指向的就是h1即结构体对象
	printf("姓名：%s，年龄：%d，身高：%lf\n", p->name, p->age, p->height);//->操作符，结构体指针变量->命名对象
}



int main() 
{
	printf("姓名：%s，年龄：%d，身高：%lf\n", h.name, h.age, h.height);//点操作符：结构体对象.成员名
	struct Xt h1 = { "肖婷",21,162 };//另外初始化
	print(&h1);
	return 0;
}