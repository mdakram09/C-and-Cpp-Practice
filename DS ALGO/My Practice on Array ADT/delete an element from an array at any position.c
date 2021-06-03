#include<stdio.h>

int mydisplay(int arr[], int n)
{
	int i;
	printf("The new array is \n");
	for(i=0; i<n; i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}


int myDelete(int arr[], int n, int index)
{
	int i;
	for(i=index; i<n-1; i++)
	{
		arr[i]=arr[i++];
	}

	printf("Element deleted from index %d position\n",index);
	return 1;
}


int main()
{
	int i,n,element,index;
	

	printf("Please enter the size of the array\n");
	scanf("%d",&n);

	int arr[n];

	printf("Please enter %d elements one by one \n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Please enter the index where you want to delete the element from the array\n");
	scanf("%d",&index);

	if(index>n)
	{
		printf("Your index position is greater then the size of the arry\n");
		return -1;
	}
	else
	{	

		myDelete(arr,n,index);
		n-=1;

		mydisplay(arr,n);
	}

	

	return 0;
}
