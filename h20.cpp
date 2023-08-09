/*Write a program to insert element of array in  any postion*/
#include<iostream>
using namespace std;

int main()
{
	int arr[50],i,element,p,size;
	
	
	cout<<"Enter the size of array :";
	cin>>size;
	
	cout<<"Enter"<<size<<"Array Element:";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to insert :";
	cin>>element;
	
	cout<<" POstion :";
	cin>>p;
	
	for(i=size;i>=p;i--)
	{
		arr[i]=arr[i-1];
		arr[i]=element;
		size++;
	}
	
	cout<<"new array is:";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
