#include<iostream>
using namespace std;
int main()
{   
	int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter index "<<i<<" value:"<<endl;
		 cin>>arr[i];
	}
	cout<<"\nOdd indexed i+100 value:"<<endl;
	for(int i=0; i<5; i++)
	{
		if(i%2==1)
		cout<<"Index "<<i<<", value: "<<arr[i]+100<<endl;
	}
	return 0;
}
