#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,r1,r2;
	cout<<"Enter the values of a, b, c :\t";
	cin>>a>>b>>c;
	d=b*b-4*a*c;


	if(d==0)
	{
		cout<<"Roots are real and equal\n";
		r1=r2= -b/(2*a);
		cout<<"Root 1 is \t:\t"<<r1<<endl;
		cout<<"Root 2 is \t:\t"<<r2<<endl;
	}
	else if(d>0)
	{
		cout<<"Roots are real and unequal \n";
		r1= (-b+sqrt(d))/(2*a);
		r2= (-b-sqrt(d))/(2*a);
		cout<<"Root 1 is \t:\t"<<r1<<endl;
		cout<<"Root 2 is \t:\t"<<r2<<endl;
	}
	else
	{
		cout<<"Roots are Imaginary";
	}
}