// template with default parameter example
#include <iostream>
using namespace std;
template <class t1=char, class t2=int>
class data
{
    t1 data1;
    t2 data2;

public:
    data(t1 a, t2 b)
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

    data<int, string> d1(12, "ram");
    d1.display();
    data<string, string> d2("home", "pen");
    d2.display();
    data<float, char> d3(12.45, 'U');
    d3.display();
    data<> d4('K', 56);
    d4.display();
    return 0;
}