#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Please enter your age \t :\t \n";
	cin>>age;
	if(age>=0 && age<=12)
	{
		cout<<"You are a child now \n";
	}
	else if(age>=13 && age<18)
	{
		cout<<"You are a teen ager \n";
	}
	else if(age>=18 && age<=50)
	{
		cout<<"You are an Adult \n";
	}
	else
	{
		cout<<"You are senior citizen \n";
	}
}