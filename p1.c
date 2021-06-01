#include<stdio.h>

struct Rectangle
{
	int length;
	int breadth;
};


int main()
{
	struct Rectangle r;
	r.length=10;
	r.breadth=5;

	printf("%d\n", r.length);
	printf("%d\n", r.breadth);
}