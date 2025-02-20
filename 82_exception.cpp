#include <iostream>
using namespace std;
int main()
{
    int x = -12;
    try
    {
        cout << "inside try block" << endl;
        if (x < 0)
        {
            throw 12.67f;
        }
        cout << "x value : " << x << endl;
        cout << "try succesfully run " << endl;
    }
    catch (int a)
    {
        cout << "nagetive value error: " << a << endl;
    }
    catch (double d)
    {
        cout << "double catch block is run" << endl;
    }
    catch (...)
    {
        cout << "default catch block is run" << endl;
    }
    cout << "after try catch block st1" << endl;
    cout << "after try catch block st2" << endl;

    return 0;
}