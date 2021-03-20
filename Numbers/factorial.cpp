#include<iostream>
using namespace std;
int main()
{
	int fact=1,n;
	cout<<"Enter the number \n";
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		fact*=i;
	}

	cout<<"Factorial of the number "<<n<<" is "<<fact<<endl;

}