/* Write a program to show the example of function overriding*/
#include<iostream>
using namespace std;
class A
{
	public:
		void person()
		{
			cout<<"Good mornning.... Gokul Dham..!"<<endl;
			
		}
};

class B :public A
{
	public:
		void person()
		{
			cout<<"Good Night.... Gokul Dham..!"<<endl;
			
		}
};

int main()
{
	B ob;
	ob.person();
	ob.A::person();
	
	return 0;
}
