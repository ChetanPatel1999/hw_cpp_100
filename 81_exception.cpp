#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "division programm start ..." << endl;
    cout << "enter two number : ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "division ans : " << c << endl;
    }
    catch (int b)
    {
        cout << "zero division error" << endl;
    }
    cout << "program succesfully run" << endl;
    cout << "main function end" << endl;
    return 0;
}