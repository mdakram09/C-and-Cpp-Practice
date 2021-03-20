#include<iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0;
	cout<<"Enter the last Number :\n";
	cin>>n;
	while(i<=n)
	{
		if(i%2==0)
		{
			sum+=i;
		}
		i++;
	}

	cout<<"The sum of all the integers till "<<n<<" is "<<sum<<endl;


}