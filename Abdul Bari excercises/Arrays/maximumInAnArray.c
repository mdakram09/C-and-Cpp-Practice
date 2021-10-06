#include<stdio.h>
int main()
{
	int n,i,max;
	printf("Please Enter the size of the array ");
	scanf("%d",&n);

	int A[n];

	printf("Please enter %d elements ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}

	max=A[0];

	for(i=0; i<n; i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}

	printf("The maximum element of the array is %d ",max);

}