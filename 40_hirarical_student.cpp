#include <iostream>
using namespace std;
class student // base class
{
    string name;
    int rno;
    float fees;

public:
    void setdata(string s, int a, float b)
    {
        name = s;
        rno = a;
        fees = b;
    }
    void disp_std()
    {
        cout << "student info : " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student fees : " << fees << endl;
    }
};
class mathstd : public student // derived
{
    int math;
    int pysics;
    int chemastry;

public:
    void setmarkmath(int a, int b, int c)
    {
        math = a;
        pysics = b;
        chemastry = c;
    }
    void disp_marks_math()
    {
        cout << "student marks :" << endl;
        cout << "math : " << math << endl;
        cout << "pysics : " << pysics << endl;
        cout << "chemastry : " << chemastry << endl;
    }
};
class comstd : public student // derived
{
    int ip;
    int account;
    int business;

public:
    void setmarkcom(int a, int b, int c)
    {
        ip = a;
        account = b;
        business = c;
    }
    void disp_marks_com()
    {
        cout << "student marks :" << endl;
        cout << "ip : " << ip << endl;
        cout << "account : " << account << endl;
        cout << "business : " << business << endl;
    }
};
int main()
{
    mathstd s1;
    s1.setdata("ram", 101, 12000);
    s1.setmarkmath(40, 50, 75);
    s1.disp_std();
    s1.disp_marks_math();
    cout << "_______________________________" << endl;
    comstd s2;
    s2.setdata("shyam", 102, 10000);
    s2.setmarkcom(55,76,50);
    s2.disp_std();
    s2.disp_marks_com();
    return 0;
}