#include<stdio.h>

struct Rectangle
{
	int length;
	int breadth;
};

int area(struct Rectangle *r1)
{
	return r1->length*r1->breadth;
}

int main()
{
	struct Rectangle r;
	
	printf("Please enter the length of the rectangle \n");
	scanf("%d", &r.length);

	printf("Please enter the breadth of the rectangle\n");
	scanf("%d", &r.breadth);
	
	printf("The area of the r1 reactangle is %d\n", area(&r));
}