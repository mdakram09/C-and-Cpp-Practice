#include<stdio.h>
int main()
{
	int leapYear;
	printf("Enter the Year");
	scanf("%d",&leapYear);

	if(leapYear%4==0)
	{
		printf("This year is a Leap Year");
	}
	else if(leapYear%400==0)
	{
		printf("This year is a Leap Year");
	}
		else
	{
		printf("Not a Leap Year");
	}