#include<stdio.h>
int main()
{
        int a=10;
        int b=5;
        int c=4;
        int d=20;
        if(a<b)
        {
        printf("a is less than b\n");
        }
        else if(b<c)
        {
        printf("b is less than c\n");
        }
	else if(d<c)
	{
	printf("d is less than c\n");
	}
	else
	{
	printf("this is default condition\n");
	}
	return 0;
}

