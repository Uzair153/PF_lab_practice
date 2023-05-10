/* This program demonstrates the use of arrays using pointers. Identify and correct errors. */
#include<iostream>
using namespace std;
int main()
{
	int *iptr[5];
	int a=65,b=66,c=67,d=68,e=69;
	int i;
	// initialize array pointers by making them point to 5 different ints
	iptr[0] = &a;
	iptr[1] = &b;
	iptr[2] = &c;
	iptr[3] = &d;
	iptr[4] = &e;
	// now prints the values being pointed to by the pointers
	for(i=0; i<5; i++)
	cout<<"Pointer "<<i<<" points to "<<*iptr[i]<<"."<<endl;
	cout<<endl;
	// now print the addresses stored in the array
	for(i=0; i<5; i++)
	cout<<"The address stored in iptr["<<i<<"] is "<<iptr[i]<<"."<<endl;
	return 0;
}

