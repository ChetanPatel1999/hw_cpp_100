#include <iostream>
using namespace std;
class demo
{
public:
    demo(int a)
    {
        cout << "1 arg constructor is called" << endl;
    }
    demo(int a, int b)
    {
        cout << "2 arg constructor is called" << endl;
    }
    demo()
    {
        cout << "0 arg constructor is called" << endl;
    }
    void display()
    {
        cout<<"hi i am display"<<endl;
    }
};
int main()
{
    demo obj1;
    obj1.display();
    return 0;
}