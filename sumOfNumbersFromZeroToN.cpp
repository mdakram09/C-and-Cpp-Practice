#include<iostream>
using namespace std;
int main()
{
	int i=0,n,sum=0;
	cout<<"Please enter value of N \t :\t";
	cin>>n;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	cout<<"Sum of numbers from 0 to "<<n<<" is "<<sum;
}