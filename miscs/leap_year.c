#include <stdio.h>
int main()
{
    int y=2036;
	int flag=0;
    if(y % 4 == 0)
    {
    	//Nested if else
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
		flag = 1;
            else
                flag = 0;
        }
        else
        	flag = 1;
    }
    else
        flag = 0;

    return 0;
}
