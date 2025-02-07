#include <iostream>
using namespace std;
class base
{
public:
    int a;

private:
    int b;

protected:
    int c;

public:
    void setdata(int x)
    {
        a = x;
    }
};
class derived : protected base
{
public:
    void disp()
    {
        setdata(77);
        cout << "a : " << a << endl;
    }
};
class derived2 : protected derived
{
public:
    void show()
    {
        setdata(55);
        cout << "a : " << a << endl;
    }
};
int main()
{
    base o1;
    o1.a = 12;
    o1.setdata(89);
    derived o2;
    o2.a = 56;
    o2.c = 567;
    o2.setdata(90);
    return 0;
}