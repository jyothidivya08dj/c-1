#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("\n enter temperature in fahrenheit");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/18;
	printf("\n temperature in celsius is%.3f",celsius);
	
}
