#include<stdio.h>
int biggest();
int main()
{
	biggest();
	return 0;
}
int biggest()
{
	int a,b,c;
	printf("enter a and b and c values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf(" a is big");
	else if(b>c)
	printf("b is big");
	else
	printf(" c is big");
	return c;
	}
