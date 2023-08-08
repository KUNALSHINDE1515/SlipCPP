/* Example of multiple inheritance */
#include<iostream>
using namespace std;

int a,b,c;
class A
{
	public:
		void input();
		void add();
	
};
void A::input()
{
	cout<<"Enter two number :";
	cin>>a>>b;
};

void A::add()
{
	c=a+b;
	cout<<"Addition is :"<<c<<endl;
}

class B
{
	public:
		void sub();
	
};

void B::sub()
{
	c=a-b;
	cout<<"Substraction is:"<<c<<endl;
}


class C:public A,public B
{
	public:
		void multi();
		void div();
	
};

void C::multi()
{
	c = a*b;
	cout<<"mutliplication is :"<<c<<endl;
}

void C::div()
{
	c=a/b;
	cout<<"Division is: "<<c<<endl;
	
};

int main()
{
	C ob;
	ob.input();
	ob.add();
	ob.sub();
	ob.multi();
	ob.div();
	
	return 0;
	
	


}
