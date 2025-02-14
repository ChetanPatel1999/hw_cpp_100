#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 3, 4, 56, 78, 90};
    int *ptr = &arr[0], i;
    cout << "array element are : ";
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}