#include <iostream>
using namespace std;
class demo
{
public:
    demo() // constructor
    {
        cout << "constructor is called " << endl;
    }
    ~demo() // destructor
    {
        cout << "destructor is called" << endl;
    }
    void dispaly()
    {
        cout<<"hi i am display "<<endl;
    }
};
int main()
{
    demo d1, d2;
    cout<<"inside main fuction"<<endl;
    d1.dispaly();
    d2.dispaly();

    return 0;
}