#include<stdio.h>
int main()
{
	int n,i, a=1,d=1;
	int arr[100];

	printf("Please enter the size of the array\n");
	scanf("%d",&n);

	printf("Enter array elements one by one \n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	while((a==0 || d==0) && i<n-1)
	{
		if(arr[i] < arr[i+1])
			d=0;
		else if(arr[i]>arr[i+1])
			a=0;

		i++;
	}

	if (a == 1)
    printf("The array is sorted in ascending order.\n");
  else if (d == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");

  return 0;

}