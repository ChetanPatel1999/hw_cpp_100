#include <iostream>
using namespace std;
class data;
class other
{
public:
    void display1(data o1);
    void display2(data o1);
};
class data
{
    int num1;
    int num2;

public:
    friend void other::display1(data);
   friend void other::display2(data);
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
void other::display1(data o1)
{
    cout << "num1 : " << o1.num1 << endl;
}
void other::display2(data o1)
{
    cout << "num2 : " << o1.num2 << endl;
}
int main()
{
    data d1;
    d1.setdata(12, 34);
    other ot;
    ot.display1(d1);
    ot.display2(d1);

    return 0;
}