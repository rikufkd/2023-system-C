#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	srand(time(0));
	int a = (rand() % 20) + 1;
	int b = (rand() % 20) + 1 - a;
	int c = 20 - a - b;
	printf("intelligence %d,stamina %d,charisma %d", a, b, c);
	if (a > b && a > c)
	{
		printf("‚ ‚È‚½‚ÌE‹Æ‚Ímage‚Å‚·B");
	}
	else if (b > a && b > c)
	{
		printf("‚ ‚È‚½‚ÌE‹Æ‚Íknght‚Å‚·B");
	}
	else
	{
		printf("‚ ‚È‚½‚ÌE‹Æ‚Íthief‚Å‚·B");
	}
	
	return 0;
}