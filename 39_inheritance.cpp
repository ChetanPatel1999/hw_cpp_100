#include <iostream>
using namespace std;
class A
{
public:
    void m1()
    {
        cout << " class A m1 method" << endl;
    }
    void m2()
    {
        cout << " class A m2 method" << endl;
    }
};
class B:public A
{
public:
    void m3()
    {
        cout << " class B m3 method" << endl;
    }
    void m4()
    {
        cout << " class B m4 method" << endl;
    }
};
int main()
{
    B a1;
    a1.m1();
    a1.m2();
    a1.m3();
    a1.m4();
    return 0;
}