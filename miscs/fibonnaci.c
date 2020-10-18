#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
	int number = atoi(argv[1]);
	int nextTerm;
	int t1 = 0;
	int t2 = 1;
	for (int i = 1; i <= number; ++i) {
        	printf("%d\t", t1);
        	nextTerm = t1 + t2;
        	t1 = t2;
        	t2 = nextTerm;
    	}
	return 0;
}
