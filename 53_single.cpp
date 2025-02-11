#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "0 arge base constructor is called" << endl;
    }
    base(int a)
    {
        cout << "1 arge base constructor is called" << endl;
    }
    base(int a, int b)
    {
        cout << "2 arge base constructor is called" << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "0 arge derived constructor is called" << endl;
    }
    derived(int x):base(x,12)
    {
        cout << "1 arge derived constructor is called" << endl;
    }
    derived(int x, int y):base(y)
    {
        cout << "2 arge derived constructor is called" << endl;
    }
};
int main()
{
    derived d1(67,89);
    return 0;
}