#include <iostream>
using namespace std;
int main()
{

int n,sum=0,i=0;
cout<<"Enter the last number\n";
cin>>n;
while(i<=n)
{
    sum+=i;
    i++;
}

cout<<"The sum of the numbers till "<<n<<" is "<<sum<<endl;

    
}