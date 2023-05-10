/*Identify and correct errors in the following program that is meant to 
take input of three numbers from user and displays the largest*/

#include <iostream>
using namespace std;
int main(){
	int x,y,z,large;
    cout<<"Input x,y, and z;";
    cin>>x>>y>>z;
    large =x;
    if (y > large)
    	large =y;
    if (z > large)
	large =z;
    cout<<"Largest of x, y, and z is:"<<large<<endl;
    return 0;
}

