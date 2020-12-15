#include<stdio.h>
#include<stdlib.h>


int main(int argc, char** argv)
{
	if (argc < 5)
	{
		return -1;
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);

	while(1) {
		if ((a >= 90 || b-- != 100) && (c < 69))
		{
			return d;
		}
		a += 1;
		b += 2;
		c += 3;
	}
	return 0;
}
