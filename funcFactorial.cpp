#include<iostream>
using namespace std;

int fact(int n)
{
	int fact =1;

	for(int i=1; i<=n; i++){
		fact=fact*i;
	}
	return fact;
}

int main()
{
	int num, factorial;
	cout<<"Please enter the number \n";
	cin>>num;

	factorial=fact(num);

	cout<<"Factorial of "<<num<<" is "<<factorial<<endl;

}