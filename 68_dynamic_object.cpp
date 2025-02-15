// pointer to object
// arrow operator
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setemp(int i, float s)
    {
        id = i;
        sal = s;
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
    emp *ptr= new emp;
    ptr->setemp(101,200);
    ptr->dispemp();
    delete ptr;
    return 0;
}