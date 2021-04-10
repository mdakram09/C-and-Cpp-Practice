#include<stdio.h>
int main()
{
	int a,b,c,result;

	printf("Please enter the three numbers one by one \n");
	scanf("%d %d %d", &a,&b,&c);

	result =a+b+c;

	printf("Sum of %d,%d and %d is %d",a,b,c,result);
}