#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,n,i=2;
	cout<<"Enter the value of last number \n";
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
	

	while(i<n)
	{
		c=a+b;
		a=b;
		b=c;

		i++;

		cout<<c<<endl;
	}


}