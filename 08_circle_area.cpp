#include<iostream>
using namespace std;
int main()
{
  float radius,area;
  const float pi=3.141;
  cout<<"enter radius : ";
  cin>>radius;
  area=pi*radius*radius;
  cout<<"area of circle : "<<area<<endl;
  return 0;
}