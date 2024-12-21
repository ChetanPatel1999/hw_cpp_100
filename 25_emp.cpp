#include <iostream>
using namespace std;
class emp
{
public:
    int id;
    float sal;
};
int main()
{
    emp e1, e2;
    e1.id = 101;
    e1.sal = 1200;
    cout << "emp info :" << endl;
    cout << "emp id :" << e1.id << endl;
    cout << "emp sal :" << e1.sal << endl;
    return 0;
}