//template example
#include <iostream>
using namespace std;
template <class t>
class data
{
    t data1;
    t data2;

public:
    data(t a, t b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "data 1 : " << data1 << endl;
        cout << "data 2 : " << data2 << endl;
    }
};
int main()
{

    data<int> d1(12, 25);
    d1.display();
    data<string> d2("home", "pen");
    d2.display();
    data<float> d3(12.45, 89.67);
    d3.display();
    data<char> d4('K', 'L');
    d4.display();
    return 0;
}