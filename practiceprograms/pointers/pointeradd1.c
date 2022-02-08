#include<stdio.h>
void add(int a,int b);
void add1(float c,float d);
int main()
{
	int a=3;
	int b=4;
	float c=3.5;
	float d=3.5;
       	add(a,b);
	add1(c,d);
	return 0;
}
void add(int a, int b)
{
	int c;
	c=a+b;
	printf("%d\n",c);
}
void add1(float c,float d)
{
	float e;
	e=c+d;
	printf("%f\n",e);
}

