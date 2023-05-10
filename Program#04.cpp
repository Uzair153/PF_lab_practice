// Identify and correct errors

#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter input variable y: "; 
  cin>>y;
  x = y;
  cout<<"Value of x : "<<x<<endl;
  int a = 3,c = 8;
  float b = 5;
  a += b;                                //a=8
  c -= b;                                //c=3
  cout<<"a += b: "<<a<<endl;             //Here we are showing the values of variables a, b and c not performing operations like +, -, * and /.   
  cout<<"c -= b: "<<c<<endl;
  a *= b;                                //a=40
  b /= c;                                //b=5/3 OR b=1.66667 
  cout<<"a *= b: "<<a<<endl;
  cout<<"b /= c: "<<b<<endl;
  return 0;
  }



