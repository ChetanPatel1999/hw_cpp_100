//with return type, with argumnet
#include<iostream>
using namespace std;
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}
int main()
{
  int res=add(12,5);
  cout<<"res : "<<res<<endl;
  cout<<"res : "<<add(6,8)<<endl;
  return 0;
}
