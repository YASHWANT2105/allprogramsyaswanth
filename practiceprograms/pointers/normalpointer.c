#include<stdio.h>
int main()
{
	int a=100;
	int *ptr=NULL;
	ptr=&a;
	*ptr=30;
	printf("%d is the value of a",a);
	return 0;
}

