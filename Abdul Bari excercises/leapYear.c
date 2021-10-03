#include<stdio.h>
int main()
{
	int Year;
	printf("Enter the Year");
	scanf("%d",&Year);

	if(Year%4==0)
	{
		printf("This year is a Leap Year");
	}
	else if(Year%400==0)
	{
		printf("This year is a Leap Year");
	}
	else if(Year%100==0)
	{
		printf("Not a Leap Year");
		
	}
	else
	{
		printf("Not a Leap Year");
	}
}