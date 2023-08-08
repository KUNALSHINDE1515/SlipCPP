/* write a  program to calculate area of trinangle*/
#include<iostream>
using namespace std;
int main()
{
	int area ,b,h;
	
	cout<<"Enter the height of triangle :";
	cin>>h;
	
	cout<<"Enter the base of triangle: ";
	cin>>b;
	
	area=(0.5)*b*h;
	cout<<"Area of triangle is :  "<<area<<endl;
	
	return 0;
}
