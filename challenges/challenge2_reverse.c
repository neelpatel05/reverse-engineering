#include<stdio.h>

short functionOne(int x) {
	int y = x;
	short z = *(short*)&y;
	return z;
}

void functionTwo(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x = 10;
	int y = x << 2;
	int a = functionOne(x);
	functionTwo(&x, &y);
	return a;
}
