#include<stdio.h>

int main() {
	int a = 10;
	short b = *(short *)&a;
	return 0;
}
