#include<stdio.h>
int main(void)
{
	int a, b;
	a = 0;
	b = 0;
	printf_s("�D���Ȑ�������͂��Ă��������B");
	scanf_s("%d", &a);
	b = a * a;
	printf_s("���͂��������̓���%d�ł��B", b);
	return 0;
}