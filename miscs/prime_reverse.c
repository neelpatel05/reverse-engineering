#include<stdio.h>
#include<stdlib.h>

int prime(int a) {
	int x = 1;
	int y = 2;
	while(y < a) {
		if (a%y == 0) {
			x = 0;
			break;
		}
		y = y + 1;
	}
	return x;
}

int main(int argc, char** argv)
{
	int a = atoi(argv[1]);
	int b = prime(a);
	if (b==0) {
		puts("Not a prime");
	} else {
		puts("Prime");
	}
	return 0;
}
