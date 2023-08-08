/* W.A.P to check number is palidrome*/
#include<iostream>
using namespace std;

int main()
{
	int num,r,i,s=0;
	cout << " Check whether a given number is palindrome or not: "<<endl;
    cout << " -------------------------------------------------------"<<endl;
    
    
	cout<"Enter the number:";
	cin>>num;
	
	for(i=num;i>0;)
	{
		r=i%10;
		s=s*10+r;
		i=i/10;
	}
	
	if(s==num)
	{
		cout<<"Number is Palindrome : "<<num<<endl;
	}
	else
	{
		cout<<"Number is  not Palindrome : "<<num<<endl;
		
	}
	
	return 0;
}
