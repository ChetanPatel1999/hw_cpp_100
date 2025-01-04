#include<iostream>
using namespace std;
void fun(int &n)//&n=a
{
    cout<<n<<endl;//12
    n=90;
    cout<<n<<endl;//90
}
int main()
{
  int a=12;
  cout<<a<<endl;//12
  fun(a);
  cout<<a<<endl;//90
  return 0;
}