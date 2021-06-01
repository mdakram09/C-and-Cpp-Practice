#include<stdio.h>

struct Rectangle
{
	int length;
	int breadth;
};

int initialize(struct Rectangle *r1)
{
	printf("Please enter the length of the rectangle \n");
	scanf("%d", &r1->length);

	printf("Please enter the breadth of the rectangle\n");
	scanf("%d", &r1->breadth);
}

int area(struct Rectangle *r1)
{
	return r1->length*r1->breadth;
}

int changeLength(struct Rectangle *r1)
{
	r1->length=5;
}

int main()
{
	struct Rectangle r;

	changeLength(&r);
	initialize(&r);
	printf("The area of the r1 reactangle is %d\n", area(&r));
}