//no return type      with argumnet
#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
void add2(int a,float b)
{
    cout<<"sum = "<<(a+b)<<endl;
}
void display(string a)
{
    cout<<"value of a : "<<a<<endl;
}
void cube(int num)
{
    int c;
    c=num*num*num;
    cout<<"cube of "<<num<<" = "<<c<<endl;
}
void range(int s,int e)
{
    int i;
    for(i=s;i<=e;i++)//3
    {
        cube(i);
    }
    
}
int main()
{
  add(12,4);
  add(6,4.8);
  add2(6,4.8);
  display("home");
  range(1,10);
  return 0;
}
