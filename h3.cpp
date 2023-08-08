/* write a program to make calculator using switch case*/

#include<iostream>

using namespace std;
int main(){
	
	char k;
	
	int n1,n2;
	
	cout<<"Enter any one oprator +,-,*,/";
	cin>>k;
	
	cout<<"Enter the data:"<<endl;
	cin>>n1>>n2;
	
	switch(k)
	{
	 case '+': 
	     cout<<n1<<"+"<<n2<<endl<<"Result is :"<<n1+n2;
	     break;	
     case '-': 
	     cout<<n1<<"-"<<n2<<endl<<"Result is :"<<n1-n2;
	     break;	
	     
     case '*': 
	     cout<<n1<<"*"<<n2<<endl<<"Result is :"<<n1*n2;
	     break;	
	case '/': 
	     cout<<n1<<"/"<<n2<<endl<<"Result is :"<<n1/n2;
	     break;	
	     
	default:
		cout<<"Enter wrong operator";
		break ;
	 
	}
	return 0;
}
