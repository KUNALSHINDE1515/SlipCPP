/* Write a program to check a number is perfect or not*/

#include<iostream>
using namespace std;
int main()
{
	int i,num,div,sum=0;
	
	cout<<"Enter the number to you have check perfect or not pefect :";
	cin>>num;
	
	for(i=1;i< num;i++)
	{
		div =num % i;
		if(div==0)
		 sum=sum+i;
		
	}
	if(sum == num)
	
		cout<<endl<<"Number is perfect : "<<num;
	else
		cout<<endl<<"Number is not perfect : "<<num;
	
	return 0;	
}
	

