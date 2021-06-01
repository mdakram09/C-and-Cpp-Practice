#include<stdio.h>

struct Rectangle
{
	int length;
	int breadth;
};


int main()
{
	struct Rectangle r;
	
	printf("Please enter the length of the rectangle \n");
	scanf("%d", &r.length);

	printf("Please enter the breadth of the rectangle\n");
	scanf("%d", &r.breadth);
	
	printf("%d\n", r.length);
	printf("%d\n", r.breadth);
}