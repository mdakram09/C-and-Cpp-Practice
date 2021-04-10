#include<iostream>
using namespace std;
int main()
{
	int size,sum=0;
	int A[size];

	int min=A[0];

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


	cout<<"The minimum element in the array is \n";
	cout<<"                                            \n";
	cout<<"--------------------------------------------\n";
	cout<<"                                            \n";

	for(int i=0; i<size; i++)
	{
		if(A[i]<min)
		{
			min=A[i];
		}
	}


	cout<<min<<endl<<endl;


	return 0;
}