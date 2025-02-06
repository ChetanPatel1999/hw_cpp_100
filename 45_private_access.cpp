#include <iostream>
using namespace std;
class base
{
private:
    int a;

public:
    void display()
    {
        cout << "a : " << a << endl;
    }
};
class devired : public base
{
public:
    void display2()
    {

        cout << "a : " << a << endl;
    }
};
class other
{
public:
    void show()
    {
        base obj;
        obj.a = 78;
        cout << "a : " << obj.a << endl;
    }
};
int main()
{
    base o1;
    o1.a = 12;
    cout << o1.a << endl;
    o1.display();
    devired o2;
    o2.a = 90;
    o2.display2();
    other o;
    o.show();
}