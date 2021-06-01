#include<stdio.h>
int main()
{
	int n;

	printf("Please enter the value\n");
	scanf("%d",&n);

	int *p;
	p=&n;

	printf("value of *p is %d\n", *p);
	printf("value of n is %d\n", n);
	printf("value of p is %d\n", p);
	printf("value of &n is %d\n", &n);
}