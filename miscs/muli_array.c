#include<stdio.h>

int main() {
	int a[2][5] = {{1,2,3,4,5},{6,7,8,9,0}};
	int *p = a[0];
	printf("%d\t",p[2]);
	int *q = a[1];
	printf("%d\t",p[4]);
	return 0;
}
