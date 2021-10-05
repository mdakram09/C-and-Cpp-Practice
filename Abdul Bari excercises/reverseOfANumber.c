#include<stdio.h>
int main()
{
	int n,x,rev=0;
	printf("Please enter the number");
	scanf("%d",&n);

	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}

	printf("The reverse of the number is %d", rev);
}