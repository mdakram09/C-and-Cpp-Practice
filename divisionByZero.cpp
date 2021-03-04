#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float c;
	cout<<"Enter a,b : \t"<<endl;
	cin>>a>>b;
	if(b==0)
	{
		cout<<"Undefined, because denominator is zero \t";
	}
	else
	{
		c=float(a/b);
		cout<<"Value of a/b is : \t"<<c<<endl;
	}
		
	return 0;
}