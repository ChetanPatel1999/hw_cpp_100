// wap to display word according to number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "ONE";
        break;
    case 2:
        cout << "TWO";
        break;
    case 3:
        cout << "THREE";
        break;
    case 4:
        cout << "FOUR";
        break;
    default:
        cout << "enter number less then 5" << endl;
    }
    return 0;
}