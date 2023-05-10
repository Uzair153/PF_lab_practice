#include<iostream>
using namespace std;
int main()
{	
	float arr[5];
	cout<<"Enter five floating-point values:"<<endl;
	for(int i=0;i<5;i++)
	cin>>arr[i];
	cout<<"Values in reverse order:"<<endl;
	for(int i=4;i>=0;i--)
	cout<<arr[i]<<endl;
	return 0;	
}
