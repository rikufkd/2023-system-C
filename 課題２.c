#include<stdio.h>
int main(void)
{
	int a;
	printf("�D���Ȑ�������͂��Ă�������");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf_s("%d�͋����ł��B", a);
	}
	else
	{
		printf_s("%d�͊�ł��B", a);
	}
	return 0;
}