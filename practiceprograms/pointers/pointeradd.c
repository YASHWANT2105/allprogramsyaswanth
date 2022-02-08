#include<stdio.h>
int main()
{
	int a[5]={0,-1,1,2,3};
	int *p=&a[0];
	printf("%d\n",*p);
	printf("address of element is:%x\n",*p);
	p=p+2;
	printf("%d\n",*p);
	printf("address of element is:%x\n",*p);
	*p=34;
	printf("%d\n",*p);
	return 0;
}
