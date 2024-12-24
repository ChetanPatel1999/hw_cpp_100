#include<iostream>
using namespace std;
class demo
{
    int a;
    int b;
    static int c;
    static int d;
    public:
    void set(int x,int y,int r,int s)
    {
        a=x;
        b=y;
        c=r;
        d=s;
    }
    void display()
    {
        cout<<"a , b = "<<a<<" , "<<b<<endl;
        cout<<"c , d = "<<c<<" , "<<d<<endl;
        cout<<"______________________________"<<endl;
    }
};
int demo::c;
int demo::d;
int main()
{
    demo d1,d2,d3;
    d1.set(12,13,100,200);
    d1.display();
    d2.set(14,15,300,400);
    d2.display();
    d3.set(16,17,500,600);
    d1.display();
    d2.display();
    d3.display();
  
  return 0;
}