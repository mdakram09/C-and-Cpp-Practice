#include<iostream>
using namespace std;
int main()
{
	int year,yearF,yearL;
	cout<<"Enter first Year \n";
	cin>>yearF;

	cout<<"Enter last Year \n";
	cin>>yearL;

	for(year=yearF; year<=yearL; year++)
	{
		if(year%400==0) 
		cout<<year<<" is a Leap Year \n";

		else if(year%100==0)
			cout<<year<<" is not a Leap Year \n";

		else if(year%4==0) 
		cout<<year<<" is a Leap Year \n";

		else
		cout<<year<<" is not a Leap Year \n";

	}


}