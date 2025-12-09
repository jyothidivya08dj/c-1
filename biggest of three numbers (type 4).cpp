#include<stdio.h>
int biggest(int x,int y,int z,int w);
int main()
{
	int x,y,z,w,result;
	printf("enter x ,y,z,w values");
	scanf("%d%d%d%d",&x,&y,&z,&w);
	result=biggest(x,y,z,w);
	printf("%d",result);
	return 0;
}
int biggest(int a,int b,int c,int d)
{
	if(a>b && a>c && a>d)
	return a;
	else if(b>c && b>d)
	return b;
	else if(c>d)
	return c;
	else
	return d;
}

