#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a, float b)
    {
        id = a;
        sal = b;
    }
    void disp_emp()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
class prgm:public emp
{
    string lang;

public:
    prgm(int x,float y,string s):emp(x,y)
    {
        lang = s;
    }
    void disp_prgm()
    {
        cout << "prgramming langauge : " << lang << endl;
    }
};
int main()
{
    prgm p1(101,12000.50,"java");
    p1.disp_emp();
    p1.disp_prgm();
    return 0;
}
