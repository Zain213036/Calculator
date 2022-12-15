#include<iostream>
using namespace std;
int main()
{
	int a,b,option;
	double x,y,z;
	float s;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter Second number"<<endl;
	cin>>b;
	cout<<" Press Button To perform function"<<endl;
	cout<<" 1-Addition"<<endl;
	cout<<" 2-subtraction"<<endl;
	cout<<" 3-Multiplication"<<endl;
	cout<<" 4-Division"<<endl;
    cout<<" ENter Choice"<<endl;
	cin>>option;
	switch(option)	
	{
		case 1:
			  x=a+b;
			  cout<<" Addition is"<<" "<<x<<endl;
			  break;
		case 2:
			  y=a-b;
			  cout<<" Subtraction is"<<" "<<y<<endl;
			  break;
		case 3:
			  z=a*b;
			  cout<<" Multiplication is"<<" "<<x<<endl;
			  break;
		case 4:
			  s=a/b;
			  cout<<" Division is"<<" "<<s<<endl;
			  break;
			  default:
			  		cout<<" Invalid Choice"<<endl;

	}
	return 0;
}
