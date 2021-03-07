#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year \n";
	cin>>year;

	if(year%400==0 || year%100!=0)
		cout<<"Leap Year";

	else
		cout<<"Not a Leap Year";

}