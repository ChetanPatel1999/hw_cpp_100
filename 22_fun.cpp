// with return type, with argumnet
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
string fun(string s)
{
    s = s + ",pen";
    return s;
}
float avrage(int a, int b)
{
    return (a + b) / 2.0;
}
char upercase(char ch)
{
    return (ch - 32);
}
int revrse_num(int num)
{
    int rem,rev=0;
    while (num)
    {
        rem = num % 10;       // 5
        rev = rev * 10 + rem; // 645
        num = num / 10;       // 0
    }
    return rev;
}
int revrse_num1()
{
    int rem,rev=0,num;
    cout<<"enter a num: ";
    cin>>num;
    while (num)
    {
        rem = num % 10;       // 5
        rev = rev * 10 + rem; // 645
        num = num / 10;       // 0
    }
    return rev;
}
int main()
{
    cout << "res : " << add(4, 7) << endl;
    cout << "string : " << fun("home") << endl;
    cout << "avrage : " << avrage(10, 11) << endl;
    cout << "upercase : " << upercase('l') << endl;
    cout << "reverse : " <<revrse_num(456) << endl;
    cout << "reverse : " <<revrse_num1() << endl;
    return 0;
}