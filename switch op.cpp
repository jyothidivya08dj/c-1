#include<stdio.h>
main()
{
	char op;
	double first,second;
	printf("enter operator(+,-,*,/,%)");
	scanf("%c",&op);
	printf("enter two values");
	scanf("%lf %lf",&first,&second);
	switch(op)
	{
		case'+':
			printf("%.1lf+%.1lf=%.1lf",first,second,first+second);
			break;
			case'-':
			printf("%.1lf-%.1lf=%.1lf",first,second,first-second);
			break;
			case'*':
			printf("%.1lf*%.1lf=%.1lf",first,second,first*second);
			break;
			case'/':
			printf("%.1lf/%.1lf=$%.1lf",first,second,first/second);
			break;
			default:
			printf("wrong choice");
	}
}
