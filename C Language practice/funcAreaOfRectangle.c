#include<stdio.h>

int area(int length,int breadth)
{
	int area;
	area=length*breadth;
}
int main()
{
	int l,b;

	printf("Please enter the length and breadth\n");
	scanf("%d %d",&l,&b);

	printf("The area of the rectangle with length %d and breadth %d is %d",l,b,area(l,b));
}