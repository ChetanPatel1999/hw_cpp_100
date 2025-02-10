#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
    friend void display(data);
    void setdata(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
void display(data o1)
{
    cout << "num1 : " << o1.num1 << endl;
    cout << "num2 : " << o1.num2 << endl;
}
int main()
{
    data d1, d2, d3;
    d1.setdata(12, 34);
    display(d1);
    return 0;
}