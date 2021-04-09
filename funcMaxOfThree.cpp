#include<iostream>
using namespace std;

int maxim(int a, int b, int c)
{

	if(a>b && a>c){

		return a;
	}
	else if(b>c){
		return b;
	}
	else{
		return c;
	}

	return 0;

}

int main()
{
	int x, y, z,r;

	cout<<"Please enter three numbers one by one \n";
	cin>>x>>y>>z;

	r=maxim(x,y,z);

	cout<<"maximum number among these three numbers is "<<r<<endl;
}