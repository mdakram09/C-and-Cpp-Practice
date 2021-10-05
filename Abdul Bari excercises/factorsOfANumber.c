#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number ");
	scanf("%d",&n);
	printf("Factors of %d is ",n);

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			printf("%d \n",i);
		}
	}
}