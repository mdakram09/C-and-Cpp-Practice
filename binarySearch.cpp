#include<iostream>
using namespace std;
int main()
{
	int size,key,mid,l,h;
	int A[size];

	l=0;
	h=size;

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

	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<key<<" found at A["<<mid<<"]"<<endl<<endl;
			
		}
		else if(key<A[mid])
		{
			h=mid-1;
			
		}
		else
		{
			l=mid+1;
		
		}
		
	}

	cout<<key<<" Not found"<<endl<<endl;

}