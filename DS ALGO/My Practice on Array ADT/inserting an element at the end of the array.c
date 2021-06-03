#include<stdio.h>

int mydisplay(int arr[], int n)
{
	int i;
	printf("The new array is \n");
	for(i=0; i<n; i++)
		printf("%d\n",arr[i]);
	return 0;
}

int main()
{
	int i,n,element;
	int arr[n];

	printf("Please enter the size of the array\n");
	scanf("%d",&n);

	printf("Please enter %d elements one by one \n",n-1);
	for(i=0; i<n-1; i++)
		scanf("%d",&arr[i]);

	printf("Please enter the element you want to insert at the end of the array\n");
	scanf("%d",&element);

	arr[i]=element;

	mydisplay(arr,n);

	return 0;
}