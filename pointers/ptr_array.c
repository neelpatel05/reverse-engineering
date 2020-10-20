#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    printf("Printing the array elements using pointer\n");
    for(int i=0;i<5;i++)
    {
        	printf("\n%x",*p);
		p++;
    }
    return 0;
}
