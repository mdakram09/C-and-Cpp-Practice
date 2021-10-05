#include<stdio.h>
int main()
{
	int n,x,count=0,i;
	printf("please enter the number ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}

	if(count==2)
		printf("Prime");
	else
		printf("Not Prime");
}