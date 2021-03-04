#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Please enter your age \t : \t \n";
	cin>>age;
	if(age>=18)
	{
		printf("Yes! You can vote, beacause your age is %d \n", age );
	}
	else
	{
		printf("No! you cannot vote, your age is %d \n", age );
	}
}