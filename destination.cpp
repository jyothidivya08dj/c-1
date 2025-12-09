#include<stdio.h>
int main()
{
	int choice,n;
	printf("select your destination");
	printf("1.kakinada,2.kurnool,3.vizag,4.hyderabad");
	printf("enter your choice");
	scanf("%d",&choice);
	printf("enter no of tickets");
	scanf("%d",&n);
	switch(choice)
	{
		case1:
			printf("\n your destination is kakinada");
			printf("no of tickets :%d");
			printf("cost of one ticket is 60");
			printf("\n total cost =%d",n*60);
			break;
				case2:
			printf("\n your destination is kurnool");
			printf("no of tickets :%d",n);
			printf("cost of one ticket is 250");
			printf("\n total cost =%d",n*250);
			break;
		case3:
			printf("\n your destination is vizag");
			printf("no of tickets :%d",n);
			printf("cost of one ticket is 120");
			printf("\n total cost =%d",n*120);
			break;
	
		case4:
			printf("\n your destination is hyderabad");
			printf("no of tickets :%d",n);
			printf("cost of one ticket is 300");
			printf("\n total cost =%d",n*300);
			break;
	
	}
}
