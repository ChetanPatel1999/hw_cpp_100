#include<iostream>
using namespace std;
void add()
{
  cout<<"sum = "<<(12+8)<<endl;
}
void add(int a)
{
    cout<<"sum = "<<(a+8)<<endl;
}
void add(int a,int b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
void add(float a)
{
    cout<<"sum = "<<(a+8)<<endl;
}
void add(float a,int b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
void add(int a,float b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
int main()
{
  add(15);
  add(5,7);
  return 0;
}