#include<stdio.h>
int main()
{
	int n,i,sum=0,dummy;
	printf("Please enter the number ");
	scanf("%d",&n);
	dummy=n;

	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}

	if(sum==dummy)
	{
		printf("%d is a perfect Number ",dummy);
	}
	else
	{
		printf("%d is not a perfect number ",dummy);
	}
}