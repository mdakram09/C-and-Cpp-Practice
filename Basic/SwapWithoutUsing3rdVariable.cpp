#include<iostream>
using namespace std;
int main()
{
	int a,b;
	a=5;
	b=3;

	cout<<"Values of a and b before swaping is "<<a<<endl<<b<<endl;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"Values of a and b after swaping is "<<a<<b;


}