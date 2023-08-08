/* Program for Multi-level inheritance*/
#include<iostream>
using namespace std;

class A
{
	protected:
		int a,b;
		public:
			void input()
			{
				cout<<"Enter two number : ";
				cin>>a>>b;
			}
};

class B:public A
{
	int c;
	public:
		void add()
		{
			c=a+b;
			cout<<"Addition is:"<<c<<endl;
		}
		
		void sub()
		{
			c=a-b;
			cout<<"Substraction  is:"<<c<<endl;
		}
};

class C :public B
{
	int c;
	 public:
	 	void multi()
	 	{
	 		c=a*b;
	 		cout<<"Multiplication is :"<<c<<endl;
	 	}
	 	
	 	void div()
	 	{
	 		c=a/b;
	 		cout<<"Division  is :"<<c<<endl;
	 	}
};

int main()
{
	C obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.multi();
	obj.div();
	
	return 0;
}
