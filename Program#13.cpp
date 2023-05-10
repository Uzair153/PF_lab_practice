/*Write a program that uses array of characters 
to take input from user and checks whether the input represents a palindrome or not, using pointer arithmetic. 
In both cases the program should display appropriate messages.*/
#include<iostream>
using namespace std;
int main()
{
	char word[20],reverse[20];
	char *ptr,*var;
	cout<<"Enter a word:"<<endl;
	cin>>word;
	cout<<"Enter the reverse of the word:"<<endl;
	cin>>reverse;
	ptr=word;
	var=reverse;
	if(*ptr==*var)
	cout<<"It is palindrome."<<endl;
	else
	cout<<"It is not palindrome."<<endl;
	return 0;
}
