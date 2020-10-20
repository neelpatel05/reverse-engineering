#include<stdio.h>

int main() {
	int a = 10;
	int* b = &a;
	printf("%p\t%d\n",b,*b);
	return 0;
}
