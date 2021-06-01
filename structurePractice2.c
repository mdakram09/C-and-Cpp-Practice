#include<stdio.h>

struct Rectangle
{
	int length;
	int breadth;
} r1, r2;


int main()
{
	
	printf("Please enter the length of the first rectangle \n");
	scanf("%d", &r1.length);

	printf("Please enter the breadth of the first rectangle\n");
	scanf("%d", &r1.breadth);
	
	printf("length of the first rectangle is %d\n", r1.length);
	printf("breadth of the first rectangle is%d\n", r1.breadth);


	printf("Please enter the length of the second rectangle \n");
	scanf("%d", &r1.length);

	printf("Please enter the breadth of the second rectangle\n");
	scanf("%d", &r1.breadth);
	
	printf("length of the second rectangle is %d\n", r1.length);
	printf("length of the second rectangle is %d\n", r1.breadth);
}