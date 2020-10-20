#include <stdio.h>
int main()
{
     	int num=123;

	int* pr2;
     	int** pr1;

     	pr2 = &num;
     	pr1 = &pr2;

	printf("Address of num: %p\t Value: %d\n",&num,*(&num));
	printf("Address of pr2: %p\t Value: %d\n",pr2,*pr2);
	printf("Address of pr1: %p\t Value: %d\n",*pr1,**pr1);
	return 0;
}
