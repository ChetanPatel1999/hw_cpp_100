#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5],i,*temp;
    temp=ptr;
    *ptr = 12;
    ptr++;
    *ptr = 89;
    ptr++;
    *ptr = 22;
    ptr++;
    *ptr = 67;
    ptr++;
    *ptr = 90;
    cout << "array element are ";
    for (i = 0; i < 5; i++)
    {
        cout << *temp << " ";
        temp++;
    }
    return 0;
}