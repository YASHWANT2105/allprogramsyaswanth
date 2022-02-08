int main()
{
	int a=3;
	int b=4;
	int *c;
	*c= add(a,b);
	printf("%d\n",*c);
	return 0;
}

#include<stdio.h>
int* add(int a,int b)
{
static int* c;
*c=a+b;
return &c;
}
