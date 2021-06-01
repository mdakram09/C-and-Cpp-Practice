#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle *p;
	p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

	p->length=10;
	p->breadth=5;

	printf("%d\n",p->length);
	printf("%d\n",p->breadth);
}