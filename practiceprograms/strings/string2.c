#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
char *a;
a=(char*)malloc(sizeof(char)*10);
scanf("%s",a);
printf("%s",a);
printf("\n");
	for(i=0;i<6;i++)
	{
	printf("%c\n",a[i]);
	printf("%d\n",a[i]);
	}
free(a);
return 0;		
}       
