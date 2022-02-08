#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
int n;
char *a;
printf("enter the number of characters in a string:\t");
scanf("%d",&n);
a=(char*)malloc(sizeof(char)*(n+1));
for(i=0;i<n;i++)
{
scanf("%c",(a+i));
}
*(a+i)='\0';
//scanf("%s",a);
printf("%s",a);
printf("\n");
for(i=0;i<n;i++)
{
printf("%c\n",a[i]);
printf("%d\n",a[i]);
}
free(a);
return 0;
}      
