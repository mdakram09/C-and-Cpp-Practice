#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the Number : \n";
	cin>>n;

	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}

	if(sum==n)
	{
		cout<<"The given Number "<<n<<" is a Perfect Number";
	}
	else
	{
		cout<<"The given Number "<<n<<" is not a Perfect Number because its sum is "<<sum;
	}
}