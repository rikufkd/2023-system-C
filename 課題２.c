#include<stdio.h>
int main(void)
{
	int a;
	printf("好きな数字を入力してください");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf_s("%dは偶数です。", a);
	}
	else
	{
		printf_s("%dは奇数です。", a);
	}
	return 0;
}