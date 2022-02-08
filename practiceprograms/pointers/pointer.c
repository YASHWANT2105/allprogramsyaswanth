#include<stdio.h>
int main()
{
	int a;
	int b;
	int *b;
       	b=&a;
	*b=6;
	printf("%d\n",a);
	prinf("%x\n",*b);
}
