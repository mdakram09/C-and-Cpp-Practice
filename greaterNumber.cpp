#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter three numbers one by one \t : \t";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is the greatest number";
	}
	else if(b>c)
	{
		cout<<b<<" is the greatest number";
	}
	else
	{
		cout<<c<<" is the greates number";
	}
}