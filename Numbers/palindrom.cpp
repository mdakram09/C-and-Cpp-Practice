#include<iostream>
using namespace std;
int main()
{
	int n,dummy,rev=0,x;
	cout<<"Enter the number :\n";
	cin>>n;

	dummy=n;

	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}

	if(rev==dummy)
	{
		cout<<"The given number "<<dummy<<" is "<<"a pallindrom"<<endl;
	}
	else
	{
		cout<<"The given number "<<dummy<<" is not a pallindrom \n";
	}


}