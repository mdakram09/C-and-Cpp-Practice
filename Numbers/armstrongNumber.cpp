#include<iostream>
using namespace std;
int main()
{
	int n,dummy,x,sum=0;
	cout<<"Enter the Number :\n";
	cin>>n;

	dummy=n;

	while(n>0)
	{
		x=n%10;
		sum+=x*x*x;
		n=n/10;
	}

	if(sum==dummy)
	{
		cout<<"The number "<<dummy<<" is a Armstrong Number";
	}
	else
	{
		cout<<"The number "<<dummy<<" is not a Armstrong Number";
	}

}