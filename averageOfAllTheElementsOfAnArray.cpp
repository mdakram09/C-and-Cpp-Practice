#include<iostream>
using namespace std;
int main()
{
	int size,sum=0;
	int A[size];

	cout<<"Please enter the size of the array \n";
	cin>>size;

	cout<<"Please enter the elements of the array one by one\n";
	cout<<"                                            \n";
	cout<<"--------------------------------------------\n";
	cout<<"                                            \n";

	for(int i=0; i<size; i++)
	{
		cout<<"Please enter A["<<i<<"] : "<<endl;
		cin>>A[i];
	}


	cout<<"The Average of elemets in the array is \n";
	cout<<"                                            \n";
	cout<<"--------------------------------------------\n";
	cout<<"                                            \n";

	for(int i=0; i<size; i++)
	{
		sum+=A[i];
		
	}
	cout<<sum/size<<endl<<endl;


	return 0;
}