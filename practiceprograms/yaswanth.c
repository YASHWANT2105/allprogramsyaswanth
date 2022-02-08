#include<stdio.h>
int main()
{
	int i,j;
	int a[6]={'h','e','l','l','o','\0'};
	int *c=&a[5];
	for(j=0;j<6;j++)
	{
	*(a+j);
	scanf("a=%d\n",a);
	}
	for(i=0;i<5;i++)
	{
	*(a+i);
	printf("a=%d\n",*c);
	}
	return 0;
}
