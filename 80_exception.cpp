#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter a value : ";
    cin >> x;
    try
    {
        cout << "inside try block" << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "x value : " << x << endl;
        cout << "try succesfully run " << endl;
    }
    catch (int a)
    {
        cout << "nagetive value error: " << a << endl;
    }
    cout << "after try catch block st1" << endl;
    cout << "after try catch block st2" << endl;

    return 0;
}