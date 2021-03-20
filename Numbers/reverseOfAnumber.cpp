#include<iostream>
using namespace std;
int main()
{
	int n,dummy,x,rev=0;
	cout<<"Enter the number :\n";
	cin>>n;

	dummy=n;

	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}

	cout<<"The Reverse of the number "<<dummy<<" is "<<rev<<endl;


}