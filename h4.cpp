/*  Write a program to reverse a number*/
#include<iostream>

using namespace std;
int main()
{
	int num,revesed_number =0,remaider;
	
	cout<<"Enter the number";
	cin>>num;
	
	while(num !=0)
	{
		remaider= num % 10;
		revesed_number = revesed_number*10+remaider;
		num/=10;
	}
	
	cout<<"Revesed Number :"<<revesed_number;
	
	return 0;
}
