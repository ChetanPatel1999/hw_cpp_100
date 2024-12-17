#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "enter a num : ";
    cin >> num;//5
    cout<<"table of "<<num<<" : "<<endl;
    for (i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << (num * i) << endl;
    }
    return 0;
}