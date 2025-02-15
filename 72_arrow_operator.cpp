// object array
#include <iostream>
using namespace std;
class emp
{
public:
    int id;
    float sal;

public:
    void setemp()
    {
        cout << "enter emp info :" << endl;
        cout << "enter emp id :" << endl;
        cin >> id;
        cout << "enter emp sal :" << endl;
        cin >> sal;
    }
    void dispemp()
    {
        cout << "emp info :" << endl;
        cout << "emp id :" << id << endl;
        cout << "emp sal :" << sal << endl;
    }
};
int main()
{
    emp *ptr = new emp;
    ptr->id = 101;
    ptr->sal = 500;
    ptr->dispemp();
    return 0;
}