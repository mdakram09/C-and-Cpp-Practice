#include<stdio.h>
int main()
{
	int n,key,i;
	printf("Please enter the size of the array ");
	scanf("%d",&n);

	int A[n];

	printf("Please enter the element you want to find ");
	scanf("%d",&key);

	printf("Please enter %d elements ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0; i<n; i++)
	{
		if(key==A[i])
		{
			printf("Element found at position A[%d] ",i);
		}
	}
}