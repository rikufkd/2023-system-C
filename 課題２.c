#include<stdio.h>
int main(void)
{
	int a;
	printf("D‚«‚È”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf_s("%d‚Í‹ô”‚Å‚·B", a);
	}
	else
	{
		printf_s("%d‚ÍŠï”‚Å‚·B", a);
	}
	return 0;
}