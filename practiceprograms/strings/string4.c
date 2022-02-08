#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char*a;
	int n=5;
	a=(char*)malloc(sizeof(char)*(n=1));
	for(i=0;i<6;i++)
	{
		*(a+i)=getchar();
	}
	*(a+i)='\0';
	printf("%s",a);
	printf("\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
	free(a);
	return 0;
}

