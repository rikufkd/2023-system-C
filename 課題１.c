#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c, d;
	a = 0;
	b = 0;
	c = 0;
	printf("aの値を入力してください");
	scanf_s("%d", &a);
	if (a==0)
	{
		printf("0以外の数字を入力してください");
		return 0;
	}
	printf("bの値を入力してください");
	scanf_s("%d", &b);
	printf("cの値を入力してください");
	scanf_s("%d", &c);
	d = (b * b) - 4 * a * c;
	if (d < 0)
	{
		printf("解なし");
	}
	double y1 = 0;
	double y2 = 2 * a;
	double y3 = 0;
	double y4 = sqrt(d);
	double y5 = 0;
	double y6 = 0;
	y1 = -b + y4;
	y5 = -b - y4;
	y3 = y1 / y2;
	y6 = y5 / y2;
	d = (b * b) - 4 * a * c;
	if (d == 0)
	{
		printf("y=%f", y3);
	}
	if (d > 0)
	{
		printf("y=%f,y=%f", y3, y6);
	}

	return 0;
}