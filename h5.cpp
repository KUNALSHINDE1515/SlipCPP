/* Write a program to calculate sum of dight*/
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,j;
	
	cout<<"Enter the number ";
	cin>>n;
	
	while(n>0)
	{
		j=n % 10;
		sum=sum+j;
		n=n/10;
		
	}
	cout<<"Sum is :"<<sum<<endl;
	
	return 0;
}
