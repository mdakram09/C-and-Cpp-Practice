#include<iostream>
using namespace std;
int main()
{
	int n,dummy,sum=0,x;
	cout<<"Enter the digit \n";
	cin>>n;

	dummy=n;

	while(n>0)
	{
		x=n%10;
		sum+=x;
		n=n/10;
	}

	cout<<"The sum of the digits of the number "<<dummy<<" is "<<sum<<endl;

}