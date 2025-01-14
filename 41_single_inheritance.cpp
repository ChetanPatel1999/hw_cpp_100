#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void set_emp(int a, float b)
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
class prgm: public emp
{
    string lang;
    public:
    void set_prgm(string s)
    {
        lang=s;
    }
    void disp_prgm()
    {
        cout<<"prgramming langauge : "<<lang<<endl;
    }
};
int main()
{
    prgm p1;
    p1.set_emp(101,50000);
    p1.set_prgm("java");
    p1.disp_emp();
    p1.disp_prgm();
    return 0;
}
