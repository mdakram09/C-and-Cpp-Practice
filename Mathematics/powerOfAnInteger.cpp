#include<iostream>
using namespace std;
void main()
{
	int num,power,temp;

	cout<<"Enter the number"<<endl;
	cin>>num;

	cout<<"Enter the power"<<endl;
	cin>>power;

	temp=num;

	if(num==0 || num==1)
	{
		cout<<"Enter number other than 0 and 1";
	}

	while(num>0)
	{
		if(num%power==0)
		{
			cout<<"The number "<<temp<<" is a power of "<<power<<endl;

		}
		else
		{
			cout<<"The number "<<temp<<" is not a power of "<<power<<endl;
		}
	}
}