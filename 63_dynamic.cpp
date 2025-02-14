// new keyword is used to allocate dynamic memory
#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    int *ptr1 = new int(78);
    float *p = new float(66.34);
    char *pc = new char('k');
    *ptr = 90;
    cout << "value1 = " << *ptr << endl;
    cout << "value2 = " << *ptr1 << endl;
    cout << "value3 = " << *p << endl;
    cout << "value4 = " << *pc << endl;
    delete ptr;
    delete ptr1;
    return 0;
}