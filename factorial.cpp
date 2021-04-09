#include<iostream>
using namespace std;

int main()
{
	int fact=1,n;

	cout<<"Please enter the number \n";
	cin>>n;

	for(int i=0; i<=n; i++)
	{
		fact=fact*i;
	}

	cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}