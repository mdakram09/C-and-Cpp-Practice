#include<stdio.h>
int main()
{
	int n,x,sum=0,dummy;
	printf("Please enter the number ");
	scanf("%d",&n);
	dummy=n;

	while(n>0)
	{
		x=n%10;
		sum=sum+x*x*x;
		n=n/10;
	}

	if(sum==dummy)
	{
		printf("Armstrong Number ");
	}
	else
	{
		printf("Not a Armstrong Number ");
	}
}