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

	printf("Please enter the length of the rectangle\n");
	scanf("%d",&p->length);

	printf("Please enter the breadth of the rectangle\n");
	scanf("%d",&p->breadth);

	printf("%d\n",p->length);
	printf("%d\n",p->breadth);
}