/*Write a C++ program which displays the average of even numbers and average of odd numbers between a range of numbers.
You need to take inputs of lower and higher values of a range and display the averages of even numbers and odd numbers fall between those values.*/
#include <iostream>
using namespace std;
int main()
{
	int start;
	int end;
	int evenSum=0;
	int oddSum=0;
	int evenCount=0;
	int oddCount=0;
	int evenAvg=0;
	int oddAvg=0;
	cout<<"Enter starting value :"<<endl;
	cin>>start;
	cout<<"Enter ending value :"<<endl;
	cin>>end;
	for(int a=start;a<=end;a=a+1)
	if(a%2==0)
	{
		evenSum=evenSum+a;
		evenCount=evenCount+1;
		evenAvg=evenSum/evenCount;
	}
	else
	{
		oddSum=oddSum+a;
		oddCount=oddCount+1;
		oddAvg=oddSum/oddCount;
	}
	cout<<"Average of even numbers = "<<evenAvg<<endl;
	cout<<"Average of odd numbers = "<<oddAvg;
	return 0;	
}
