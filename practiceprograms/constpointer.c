#include<stdio.h>
int main()
{
	int a=100;
	int *ptr=NULL;
	ptr=&a;
	*ptr=30;
	printf("%d is value of a\n",a);
	return 0;
}
