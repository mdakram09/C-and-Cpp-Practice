#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int choice;

	cout<<"Enter your choice \n 1. Triangle \n 2. Square \n 3. Rectangle \n 4. Parallelogram\n";
	cin>>choice;

	switch(choice)
	{
		case 1:
				int a,b,c;
				float s, areaT;

				cout<<"Enter the sides of Triangle one by one \n";
				cin>>a>>b>>c;

				s=(float)(a+b+c)/2;

				areaT=sqrt(s*(s-a)*(s-b)*(s-c));

				cout<<"Area of the traingle with sides "<<a<<", "<<b<<", "<<c<<" is "<<areaT<<endl;

				break;


		case 2:
				int side;
				float areaS;

				cout<<"Enter the side of the square \n";
				cin>>side;

				areaS=side*side;
				cout<<"Area of the square with side "<<side<<" is "<<areaS;

				break;

		case 3:
				int length,breadth;
				float areaRP;

				cout<<"Enter length and breadth od the rectangle one by one \n";
				cin>>length>>breadth;

				areaRP=length*breadth;
				cout<<"Area of the rectangle with length "<<length<<" and breadth "<<breadth<<" is "<<areaRP;

				break;

		case 4:
				int height,base;
				float areaP;

				cout<<"Enter the height and base of the Parallelogram one by one \n";
				cin>>height>>base;

				areaP=(float)base*height;

				cout<<"Area of the Parallelogram with height "<<height<<" and base "<<base<<" is "<<areaP;

				break;

		default:
				cout<<"Wrong Choice!!!!!!!!!!!!!!";
				break;

	}


}