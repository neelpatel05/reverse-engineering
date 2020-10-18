#include<stdio.h>
#include<stdlib.h>

int factorial(int number) {
	if(number == 0)
		return 1;
	else
		return number*factorial(number-1);
}

int main(int argc, char** argv) {
	int number = atoi(argv[1]);
	int result = factorial(number);
	printf("Factorial of number %d is: %d\n",number, result);
	return 0;
}
