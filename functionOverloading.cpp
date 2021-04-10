#include<iostream>
using namespace std;

int sumf(int x)
{
	cout<<"The number is alone\n";
	return 0;
}

int sumf(int x, int y)
{
	cout<<"The sum of these two numbers is "<<x+y<<endl;
	return 0;
}

int sumf(int x, int y, int z)
{
	cout<<"The sum of these two numbers is "<<x+y+z<<endl;
	return 0;
}

int sumf(int x, int y, int z, int t)
{
	cout<<"The sum of these two numbers is "<<x+y+z+t<<endl;
	return 0;
}

int main()
{
	int sum,a,b,c,d;

	cout<<"Please enter first number \n";
	cin>>a;

	cout<<"Please enter second number \n";
	cin>>b;

	cout<<"Please enter third number \n";
	cin>>c;

	cout<<"Please enter fourth number \n";
	cin>>d;

	sumf(a);
	sumf(a,b);
	sumf(a,b,c);
	sumf(a,b,c,d);
}