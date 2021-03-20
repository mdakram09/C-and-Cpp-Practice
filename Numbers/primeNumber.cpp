#include<iostream>
using namespace std;
int main()
{

	int n,i,count=0;
	cout<<"Enter the number :\n";
	cin>>n;

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}


	if(count==2)
	{
		cout<<"The number "<<n<<" is Prime number because it is only divisible by 1 and "<<n;
	}
	else
	{
		cout<<"The given number "<<n<<" is not a prime number because it is divisible by \n";

	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
		}
	}
	}
}