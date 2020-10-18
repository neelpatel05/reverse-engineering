#include<stdio.h>
#include<stdlib.h>

int prime(int number) {
	int flag = 1;
	for(int i = 2;i < number; i++) {
		if(number % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(int argc, char** argv) {
	int number = atoi(argv[1]);
	int x = prime(number);
	if(x)
		puts("Number is Prime");
	else
		puts("Number is Non-Prime");
	return 0;
}
