#include <iostream>
using namespace std;
class base
{
public:
    void virtual display() = 0; // pure virtual function
    void show()
    {
        cout << "hi i am show function" << endl;
    }
};
class derived : public base
{
public:
    void disp()
    {
        cout << "hi i am derived disp" << endl;
    }
    void display()
    {
        cout << "base class display is override" << endl;
    }
};
int main()
{
    derived d1;
    d1.show();
    d1.disp();
    d1.display();
    return 0;
}