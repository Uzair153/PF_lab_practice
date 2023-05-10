/*Write a C++ program that performs a transaction in the existing balance of a Bank’s account. 
Take input from the user the amount he/she wants to either withdraw or deposit from account’s balance and displays 
the current balance after performing the transaction user wants to perform on the Bank’s account.*/

#include <iostream>
using namespace std;
int main()
{
	int ta=1000; 
	int a,d,w;
	cout<<"Enter 1 for deposition and 2 for withdrawl :"<<endl;
	cin>>a;
	if (a==1)
	{
    cout<<"Enter depositing amount :"<<endl;
	cin>>d;
	ta+=d;
	cout<<"Amount after deposition :"<<endl<<ta;
	}
	else if (a==2)
    {
    cout<<"Enter withdrawing amount :"<<endl;
	cin>>w;
	ta-=w;
	cout<<"Amount after withdrawl :"<<endl<<ta;
	}
	else
	cout<<"Invalid input!";
	return 0;
}
