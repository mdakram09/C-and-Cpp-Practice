#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Please enter the size of the array ");
	scanf("%d",&n);
	int A[n];

	for(i=0; i<n; i++)
	{
		printf("Please enter A[%d] : ", i);
		scanf("%d",&A[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=sum+A[i];
	}
	printf("The sum of elements of the array is %d ",sum);

}