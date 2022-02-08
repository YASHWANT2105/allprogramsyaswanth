#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 1000
int main()
{
char*a=NULL;
char*b=NULL;
a=(char*)malloc(sizeof(char)*MAX_SIZE);
b=(char*)malloc(sizeof(char)*MAX_SIZE);
scanf("%[^\n]",a);
scanf("%[^\n]",b);
strcat(b,a);
printf("%s",b);
printf("\n");
gets(a);
gets(b);
free(b);
free(a);
return 0;
}
