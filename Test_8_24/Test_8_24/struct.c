#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Hym
{
	char name[10];//��������ʱ��������г�ʼ������Ҫָ����С
	int age;
	double height;
}h = {"��Ԫ��",22,172};//�ṹ�嶨���ʱ��Ϳ��Գ�ʼ��

struct Xt
{
	char name[10];//��������ʱ��������г�ʼ������Ҫָ����С
	int age;
	double height;
}; 

void print(struct Xt* p)
{
	printf("������%s�����䣺%d����ߣ�%lf\n", (*p).name, (*p).age, (*p).height);//(*p)ָ��ľ���h1���ṹ�����
	printf("������%s�����䣺%d����ߣ�%lf\n", p->name, p->age, p->height);//->���������ṹ��ָ�����->��������
}



int main() 
{
	printf("������%s�����䣺%d����ߣ�%lf\n", h.name, h.age, h.height);//����������ṹ�����.��Ա��
	struct Xt h1 = { "Ф��",21,162 };//�����ʼ��
	print(&h1);
	return 0;
}