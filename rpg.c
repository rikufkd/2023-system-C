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
		printf("���Ȃ��̐E�Ƃ�mage�ł��B");
	}
	else if (b > a && b > c)
	{
		printf("���Ȃ��̐E�Ƃ�knght�ł��B");
	}
	else
	{
		printf("���Ȃ��̐E�Ƃ�thief�ł��B");
	}
	
	return 0;
}