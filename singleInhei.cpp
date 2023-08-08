/* Example of single inheritance*/
#include<iostream>
using namespace std;

class bharat
{
	protected:
		int amount;
	public:
		void input()
		{
			amount=5846974;
			
		}
};
class kunal : public bharat
{
	int money;
	public:
		void show()
		{
			money=1200;
			cout<<"Kunal Money is: "<<money<<endl;
			cout<<"Bharat Amount is: "<<amount;
		}
};
int main()
{
	kunal k;
	k.input();
	k.show();
	
	return 0;
}
