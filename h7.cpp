/* write a program to check number is armstrong*/
#include<iostream>

using namespace std;

int main()
{
	int num ,i,k,sum=0;
	cout<<"Check number is armstrong or not armstrong: "<<endl;
	cout<<"Enter the number :";
	cin>>num;
	i=num;
	
	while(i != 0)
	{
		k=i%10;
		sum=sum+k*k*k;
		i=i/10;
		
		if(sum ==num)
		{
			cout<<"Number is armstrong :"<<num<<endl;
			
		}
		else
		{
			cout<<"Number is not armstrong :"<<num<<endl;

		}
		return 0;
	}
}
