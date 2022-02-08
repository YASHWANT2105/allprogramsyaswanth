#include<stdio.h>
int add(int a,int b);
int main()
{
	int a=5;
	int b=6;
	int c;
	int (*ptr)(int x,int y);
	ptr=add;
	c =ptr(a,b);
	printf("%d\n",c);
}
	int add(int a,int b)
        {
                int c;
                c=a+b;
                return c;
        }
