#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter array size : ";
    cin >> n;
    int *ptr = new int[n], i, *temp;
    temp = ptr;
    cout << "enter array element: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> (*ptr);
        ptr++; 
    }
    ptr = temp;
    cout << "array element are ";
    for (i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = temp;
    delete ptr;
    return 0;
}