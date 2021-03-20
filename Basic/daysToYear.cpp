#include<iostream>
using namespace std;
int main()
{
	int tdays, days, year,week;
	cout<<"Enter number of days \n";
	cin>>tdays;

	year=tdays/365;
	week=(tdays%365)/7;
	days=(tdays%365)%7;

	cout<<year<<" Years "<<week<<" Weeks "<<days<<" days \n";
}