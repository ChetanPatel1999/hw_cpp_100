#include<iostream>
using namespace std;
int main()
{
  int a=12;
  int &b=a;   // b is reference variable
  cout<<a<<endl;//12
  cout<<b<<endl;//12
  a=78;
  cout<<a<<endl;//78
  cout<<b<<endl;//78
  b=9;
  cout<<a<<endl;//9
  cout<<b<<endl;//9
  return 0;
}