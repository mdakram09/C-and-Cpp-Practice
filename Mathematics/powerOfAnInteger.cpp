#include<iostream>
using namespace std;
int main()
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
		exit(0);
	}

	while(num>1)
	{
		if(num%power==0)
		{
			cout<<"The number "<<temp<<" is a power of "<<power<<endl;
			exit(0);

		}
		else
		{
			cout<<"The number "<<temp<<" is not a power of "<<power<<endl;
			exit(0);
		}
		num=num/10;
	}
	return 0;
}
