#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "0 agr base1" << endl;
    }
    base1(int a)
    {
        cout << "1 agr base1" << endl;
    }
};
class base2
{
public:
    base2()
    {
        cout << "0 agr base2" << endl;
    }
    base2(int a)
    {
        cout << "1 agr base2" << endl;
    }
};
class D : public base1, public base2
{
public:
    D(int a, int b) : base1(a), base2(b)
    {
        cout << "2 arg D" << endl;
    }
    D(int a, int b, int c)
    {
        cout << "3 arg D" << endl;
    }
};
int main()
{
    D d1(12, 34);
    return 0;
}