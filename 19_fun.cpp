// no return type no argumnet
#include <iostream>
using namespace std;
void even_odd()
{
    int num;
    cout << "enter a num :";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "num is even number" << endl;
    }
    else
    {
        cout << "num is odd number" << endl;
    }
}
void pattern()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    even_odd();
    pattern();
    return 0;
}