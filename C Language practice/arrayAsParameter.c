#include<stdio.h>
int showme(int A[])
{
	int i;
	printf("The elements in the array are \n");
	for(i=0;i<5;i++)
	{
		printf("%d",A[i]);
	}

}

int main()
{
	int A[5],i;

	printf("Please enter 5 numbers one by one\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}

	showme(A);

}