#include <iostream>
using namespace std;
void fun1(int,double);
void fun2(int a) // defination
{
    int b;
    fun1(89,78.90);
    cout << "fun2 is called and a : " << a << endl;
}
void fun1(int a,double b)
{
    cout << "fun1 is called and a : " << a << endl;
}
int main()
{
    cout << "main function is called" << endl;
    fun2(12);
    return 0;
}
