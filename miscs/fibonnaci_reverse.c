#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int e;
	int a = atoi(argv[1]);
	int b = 0x0;
	int c = 0x1;
	int d = 0x1;
	while(d <= a)
	{
		printf("%d ",b);
		e = b + c;
		b = c;
		c = e;
		d = d + 1;
	}
	return 0;
}
