#include<stdio.h>
#include<stdlib.h>
int main()
{
int *a;
a=(int *)malloc("size of int");
int e;
*a=e;
printf("%d\n",*a);
printf("%d\n",a);
free(a);
}
