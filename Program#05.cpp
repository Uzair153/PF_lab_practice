#include<iostream>
using namespace std;
int main()
{
	string name;
	int age,salary,days,ts;
	cout<<"ENTER NAME OF EMPLOYEE : ";
	cin>>name;
	cout<<"ENTER AGE OF EMPLOYEE : ";
	cin>>age;
	cout<<"ENTER SALARY OF EMPLOYEE PER DAY : ";
	cin>>salary;
	cout<<"ENTER DAYS EMPLOYEE WORKED : ";
	cin>>days;
	ts=salary*days;
	cout<<"EMPLOYEE NAME : "<<name<<"\n";
	cout<<"EMPLOYEE AGE : "<<age<<"\n";
	cout<<"EMPLOYEE SALARY PER DAY : "<<salary<<"\n";
	cout<<"EMPLOYEE NUMBER OF WORKING DAYS : "<<days<<"\n";
	cout<<"TOTAL SALARY : "<<ts;
	return 0;
}
