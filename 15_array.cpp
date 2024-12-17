#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
    cout << "enter array elements : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "array element are :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    cout << "sum of array element : " << sum << endl;
    return 0;
}