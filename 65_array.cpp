#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5], i, *temp;
    temp = ptr;
    *ptr = 12;
    *(ptr + 1) = 89;
    *(ptr + 2) = 22;
    *(ptr + 3) = 67;
    *(ptr + 4) = 90;
    cout << "array element are ";
    for (i = 0; i < 5; i++)
    {
        cout << *temp << " ";
        temp++;
    }
    return 0;
}