#include<stdio.h>
int main()
{
	int n,x;
	printf("Please enter the number");
	scanf("%d",&n);

	while(n>0)
	{
		x=n%10;
		printf("%d",x);
		n=n/10;
	}
}