// function template
#include <iostream>
using namespace std;
template <class t>
void display(t a)
{
    cout << "data :" << a << endl;
}
int main()
{
    display(12);
    display("home");
    display(45.78);
    display('K');
    return 0;
}