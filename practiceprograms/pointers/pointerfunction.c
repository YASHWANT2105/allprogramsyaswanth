#include<stdio.h>
int main()
{
	int a=3;
	int b=4;
	float c=2.5;
	float d=3.5;
	void add(int a,int b )
	{
		int c;
		c=a+b;
		printf("%d\n",c);
	}
	void add1(float a,float b)
	{
		float c;
		c=a+b;
		printf("%f\n",c);
	}
	add(a,b);
	add1(c,d);
	return 0;
}
