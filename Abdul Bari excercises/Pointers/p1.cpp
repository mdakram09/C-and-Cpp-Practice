#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Please enter the number ";
	cin>>x;

	int *p=&x;
	cout<<"Address of x is : "<<&x<<endl;
	cout<<"p is : "<<p<<endl;
	cout<<"*p is : "<<*p<<endl;
	return 0;
}