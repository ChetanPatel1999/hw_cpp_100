#include <iostream>
using namespace std;
class emp
{
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
    emp e[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        e[i].setemp();
    }

    for (i = 0; i < 3; i++)
    {
        e[i].dispemp();
    }
    return 0;
}