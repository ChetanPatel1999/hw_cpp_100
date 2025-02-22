#include <iostream>
using namespace std;
int main()
{
    string s = "chetan";
    int i;
    for (i = 0; i < s.length(); i++) // 6
    {
        cout << s.at(i) << " ";
    }
    return 0;
}