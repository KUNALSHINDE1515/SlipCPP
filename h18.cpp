/* Write a program to sort array element in acending and decending order..*/
#include<iostream>
#include<algorithm>

using namespace std;

const int arr_s = 10;

int main()
{
	
	int arr[arr_s]={2,5,8,7,4,1,6,3,9,0};
	
	cout<<"Original array is: ";
	
	for(int i=0;i<arr_s;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	sort(arr,arr+arr_s,greater<int>() );
	cout<<"This is the sorted array :";
	
	for(int i=0;i<arr_s;i++)
	{
		cout<<arr[i]<<" ";
	}
	

	
	return 0;
}
