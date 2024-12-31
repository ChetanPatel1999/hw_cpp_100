#include <iostream>
using namespace std;
class demo
{
    int num;

public:
    void setdata(int a)
    {
        num = a;
    }
    void add(demo obj)
    {
        int sum;
        cout << "d1.num = " << num << endl;
        cout << "d2.num = " << obj.num << endl;
        sum = num + obj.num;
        cout << "sum = " << sum << endl;
    }
    static void add2(demo obj1,demo obj2)
    {
        int sum;
        sum = obj1.num + obj2.num;
        cout << "sum = " << sum << endl;
    }
};
int main()
{
    demo d1, d2;
    d1.setdata(12);
    d2.setdata(5);
    d1.add(d2);
    demo::add2(d1,d2);

    return 0;
}