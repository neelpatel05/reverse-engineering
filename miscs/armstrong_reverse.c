#include<stdio.h>

int main()
{
	int a = 0x0;
	int b = 370;
	int c = b;
	int x;
	while(c != 0)
	{
		x = c % 10;
		a = a + x*x*x;
		c = c/10;
	}
	if (b == a)
	{
		puts("Armstrong");
	}
	else
	{
		puts("Not Armstrong");
	}
	return 0;
}
