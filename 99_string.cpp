#include <iostream>
using namespace std;
int main()
{
    string s1 = "chetan";
    cout << "capacity : " << s1.capacity() << endl;
    s1.shrink_to_fit();
    cout << "capacity : " << s1.capacity() << endl;
    s1.resize(2);
    cout << "size : " << s1.length() << endl;
    cout << s1 << endl;
    return 0;
}