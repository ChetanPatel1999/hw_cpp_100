#include<iostream>
using namespace std;
class addition
{
    public:
    void add(int a,int b)
    {
        cout<<"sum = "<<(a+b)<<endl;
    }
};
class subtraction
{
    public:
    void sub(int a,int b)
    {
        cout<<"sub = "<<(a-b)<<endl;
    }
};
class multiplication
{
    public:
    void mul(int a,int b)
    {
        cout<<"mul = "<<(a*b)<<endl;
    }
};
class calculater:public addition,public subtraction,public multiplication
{
   public:
   void all_ope(int a,int b)
   {
     add(a,b);
     sub(a,b);
     mul(a,b);
   }
};
int main()
{
    calculater c1;
    c1.add(12,5);
    c1.sub(12,5);
    c1.mul(12,5);
    c1.all_ope(8,5);
    return 0;
}