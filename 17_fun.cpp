#include <iostream>
using namespace std;

void fun1()
{
    cout << "fun1 is called" << endl;
}
void fun2(); // fuction declaration
int main()
{
    cout << "main function is called" << endl;
    fun2();
    return 0;
}
void fun2() // defination
{
    fun1();
    cout << "fun2 is called" << endl;
}
