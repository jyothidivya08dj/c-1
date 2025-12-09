#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("\n enter temperature in celsius");
	scanf("%f",&celsius);

	printf("\n temperature in fahrenheit is%.3f",(1.8*celsius)+32);
}
