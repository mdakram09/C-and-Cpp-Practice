#include<iostream>
using namespace std;
int main()
{
	char choice;
	float num1, num2, result;
	int flag=1;

	cout<<"Please Enter you choice + - * /"<<endl;
	cin>>choice;

	cout<<"Please Enter first number \n";
	cin>>num1;

	cout<<"Please Enter second number \n";
	cin>>num2;

	switch(choice)
	{
		case '+':
				result=num1+num2;
				break;
		case '-':
				result=num1-num2;
				break;

		case '*':
				result=num1*num2;
				break;
		case '/':
				if(num2==0)
				{
					flag=0;
				}
				else
				{
					result=num1/num2;
				}
				break;

		default:
				cout<<"Wrong Choice!!!!!!!!!!!";
				exit(0);
				break;
	}


	if(flag==1)
	{
		cout<<"The result is "<<num1<<choice<<num2<<" = "<<result<<endl;
	}
	else
	{
		cout<<"Undefined!!!!!!!!!"<<endl;
	}
	
}