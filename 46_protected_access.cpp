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
    void display()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
    }
};
class devired : public base
{
public:
    void display2()
    {

        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "c : " << c << endl;
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
        cout << "a : " << obj.b << endl; 
        cout << "a : " << obj.c << endl; 
    }
};
int main()
{
    base o1;
    o1.a = 12;
    o1.b = 67;
    o1.c = 89;
    cout << o1.a << endl;
    o1.display();
    devired o2;
    o2.a = 90;
    o2.display2();
    other o;
    o.show();
}