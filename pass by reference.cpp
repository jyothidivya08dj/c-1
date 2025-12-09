#include<stdio.h>
void swap(int *a,int*b);
int main()
{
	int a=10,b=20;
	printf("\n before swapping a=%d and b=%d",a,b);
	swap(&a ,&b);
printf("\n after swaping a=%d and b=%d",a,b);
}
void swap(int *a ,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


	
