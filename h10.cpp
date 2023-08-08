/*Write a program to check number is prime*/

#include<iostream>

using namespace std;
int main()
{
	int num,i=2,count=0;
	
	cout<<"Entern the number :";
	cin>>num;
	
	while(i < num)
	{
		if(num % 10 ==0)
		{
			count++;
			break;
		}
		i++;
	}
	if(count == 1)
	{
		cout<<num<<" :Number is not prime ";
	}
	else
	{
		cout<<num<<"-Number is  prime :"<<endl;
	}
	return 0;
}
