/* Here is the example of hierarchical inheritance*/
#include<iostream>
using namespace std;

class animal
{
	public:
		void eat()
		{
			cout<<"Animals are eating their foods.....!";
		}
	
};
class cat:public animal
{
	public:
		void voice()
		{
			cout<<"meow ...meow...."<<endl;
		}
	
};
class dog:public animal
{
	
	public:
		void bark()
		{
			cout<<"woof....woof";
		}
};

int main()
{
	cat c;
	dog d;
	c.eat();c.voice();
	d.eat();d.bark();
	
	return 0;
}
