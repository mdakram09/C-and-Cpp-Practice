#include<stdio.h>
int main()
{
	int n,rev=0,x;
	printf("Please enter the number ");
	scanf("%d",&n);
	int dummy=n;

	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}

	if(rev==dummy)
	{
		printf("Palindrom");
	}
	else
	{
		printf("Not a Palindrom");
	}
}