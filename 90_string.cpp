#include <iostream>
using namespace std;
int main()
{
    string s = "chetan";
    cout << s << endl;
    int i;
    for (i = 0; s[i] != '\0'; i++)//6
    {
        cout << s[i] << " ";
    }
    return 0;
}