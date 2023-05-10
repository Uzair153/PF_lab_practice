#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter a positve integer :"<<endl;
	cin>>n;
	for(int i=1;i<=n;i=i+1)
	sum+=i;
	cout<<"Sum of natural numbers = "<<sum;
	return 0;
}
