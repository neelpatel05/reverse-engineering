#include<stdio.h>

int main() {
	int a = 1;
	char byte = *(char *)&a;
	return byte;
}
