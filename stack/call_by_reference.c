#include<stdio.h>

int add(int *a, int *b, int *sum) {
	*sum = *a + *b;
	return *sum;
}

int main() {
	int a = 10;
	int b = 20;
	int sum;
	sum = add(&a, &b, &sum);
	return sum;
}
