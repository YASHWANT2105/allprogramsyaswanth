#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
int n;
char *a;
a=(char*)malloc(sizeof(char)*(n+1));
scanf("%[^\n]",a);
printf("%s",a);
printf("\n");
for(i=0;i<6;i++)
{
printf("%d\n",a[i]);
}
free(a);
return 0;
}
