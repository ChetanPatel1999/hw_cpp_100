#include <iostream>
using namespace std;
class dipslay
{
public:
    void disp(int a)
    {
        cout << "a = " << a << endl;
    }
    void disp(float a)
    {
        cout << "a = " << a << endl;
    }
    void disp(string a)
    {
        cout << "a = " << a << endl;
    }
    void disp(char a)
    {
        cout << "a = " << a << endl;
    }
};
int main()
{
    dipslay d1;
    d1.disp(12);
    d1.disp(45.67f);
    d1.disp("chetan");
    d1.disp('K');
    return 0;
}