/* Example of  fuction overloading*/

#include<iostream>
using namespace std;

class A
{
	 
	int n1,n2,Sum,m;
	 public:
	 	void person()
	 	{
	 		cout<<"Enter two number : ";
	 		cin>>n1>>n2;
	 		Sum=n1+n2;
	 		cout<<"Addition is: "<<Sum;
		 }
	void person(int a,int b)
	{
		m=a*b;
		cout<<"Multiplication is :"<<m<<endl;
	}
	 
};

int main()
{
	A ob;
	ob.person(10 ,50);
	ob.person();
	return 0;
}
