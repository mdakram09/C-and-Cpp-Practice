#include<stdio.h>
int main()
{
	int totalAmount, discount, discountedAmount;
	printf("Please enter the total amount\n");
	scanf("%d",&totalAmount);

	printf("Total amount is %d",totalAmount);
	if(totalAmount<100)
	{
		printf("No discount\n");
	}
	else if(totalAmount>=100 && totalAmount<500)
	{
		discount=totalAmount/10;
		printf("Discount Amount is %d",discount);
	}
	else if(totalAmount>=500)
	{
		discount=(totalAmount)*0.20;
		printf("Discount Amount is %d",discount);
	}

	discountedAmount=totalAmount-discount;
	printf("Discounted amount is %d",discountedAmount);

}