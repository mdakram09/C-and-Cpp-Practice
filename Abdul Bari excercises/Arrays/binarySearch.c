#include<stdio.h>
int main()
{
	int n,key,i,l,h,mid;
	printf("Please enter the size of the array ");
	scanf("%d",&n);

	int A[n];

	printf("Please enter the element you want to find ");
	scanf("%d",&key);

	printf("Please enter %d elements in sorted order ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}

	l=0;
	h=n;
	mid=(l+h)/2;

	while(l<=h)
	{
		if(key==A[mid])
		{
			printf("Key element found at A[%d] ",mid);
			break;
		}
		else if(key<A[mid])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}

	}

}