#include<stdio.h>
int main(void)
{
	int a, b;
	a = 0;
	b = 0;
	printf_s("好きな数字を入力してください。");
	scanf_s("%d", &a);
	b = a * a;
	printf_s("入力した数字の二乗は%dです。", b);
	return 0;
}