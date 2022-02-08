#include<stdio.h>
#include<stdlib.h>
int main()
{
char *a;
a=(char*)malloc(sizeof(char)*10);
scanf("%s",a);
printf("%s",a);
printf("\n");
free(a);
return 0;
}
