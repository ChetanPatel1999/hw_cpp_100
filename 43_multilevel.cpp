#include <iostream>
using namespace std;
class student
{
    int rno;

public:
    void set_rno(int a)
    {
        rno = a;
    }
    void disp_rno()
    {
        cout << "rollnumber : " << rno << endl;
    }
};
class marks : public student
{
public:
    int hindi;
    int math;

public:
    void set_marks(int a, int b)
    {
        hindi = a;
        math = b;
    }
    void display_marks()
    {
        cout << "hindi : " << hindi << endl;
        cout << "math : " << math << endl;
    }
};
class result : public marks
{
    float per;

public:
    void result_gen()
    {
        per = (hindi + math) / 2.0;
        cout << "percentage : " << per << endl;
    }
};
int main()
{
    result s1;
    s1.set_rno(101);
    s1.set_marks(50, 70);
    s1.disp_rno();
    s1.display_marks();
    s1.result_gen();
    return 0;
}