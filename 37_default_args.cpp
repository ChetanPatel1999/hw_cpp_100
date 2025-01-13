//default argument  in function concept:-
#include<iostream>
using namespace std;
void add(int a,int b=8)//b have defaulit argument
{
    cout<<"sum = "<<(a+b)<<endl;
}
void totalbill(int quantity,int price=100)
{
    cout<<"total bill : "<<(quantity*price)<<endl;
}
int main()
{
  add(5);
  totalbill(5);
  return 0;
}