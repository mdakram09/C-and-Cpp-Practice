#include<iostream>
using namespace std;
int main()
{
	int size,key;
	int A[100];

	

	cout<<"Please enter the size of the array \n";
	cin>>size;

	cout<<"Please enter the key\n";
	cin>>key;

	cout<<"Please enter the elements of the array one by one\n";
	cout<<"                                            \n";
	cout<<"--------------------------------------------\n";
	cout<<"                                            \n";

	for(int i=0; i<size; i++)
	{
		cout<<"Please enter A["<<i<<"] : "<<endl;
		cin>>A[i];
	}

	for(int i=0; i<size; i++)
	{
		if(key==A[i])
		{
			cout<<key<<" found at A["<<i<<"]"<<endl<<endl;
		}
		return 0;
	}

	cout<<key<<"Not found"<<endl<<endl;

}