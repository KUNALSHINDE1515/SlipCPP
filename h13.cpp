/* write a program to find prime number between two number*/

#include<iostream>
using namespace std;
int main()
{
	int low,high,i ;
	bool is_prime =true;
	
	cout<<"Enter two number : ";
	cin>>low>>high ;
	
	cout<<endl<<"prime number between "<<low<<"and"<<high<<"are"<<endl;
	
	while(low<high)
	{
		is_prime =true;
		if(low ==0 || low == 1)
		{
			is_prime =false;
		}
		
		for(i =2;i<=low/2;++i)
		{
			if(low %i ==0)
			{
				is_prime =false;
				break;
			}
		}
		
		if(is_prime)
		cout<<low<<", ";
		
		++low;
	}
	
	
	
	return 0;
}
