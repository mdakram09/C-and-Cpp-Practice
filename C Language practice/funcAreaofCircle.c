#include<stdio.h>
#include<math.h>
#define PI 3.14

float area(float radius)
{

	float area;
	area=PI*pow(radius,2);
	return area;
}
int main()
{
	float r;

	printf("Please enter the radius of the circle \n");
	scanf("%f",&r);

	printf("Area of the circle with radius %f is %f",r,area(r));

}