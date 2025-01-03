#include <iostream>
using namespace std;
class student
{
    int rno;
    string name;
    float per;
    static int totalfail;
    static int totalpass;
    static int totalstd;

public:
    student(int a, string s, float p)
    {
        rno = a;
        name = s;
        per = p;
        totalstd++;
    }
    void resultcard()
    {
        cout << "result card of student*****" << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student percentage : " << per << endl;
        if (per > 33)
        {
            cout << "student pass" << endl;
            totalpass++;
        }
        else
        {
            cout << "student fail" << endl;
            totalfail++;
        }
        cout << "_____________________________________" << endl;
    }
    static void totalreasult()
    {
        cout << "total result of class" << endl;
        cout << "Total pass : " << totalpass << endl;
        cout << "Total fail : " << totalfail << endl;
        cout << "_________________________________ " << endl;
    }
    static void disp_total_std()
    {
        cout << "total student of class : " << totalstd << endl;
        cout << "_________________________________ " << endl;
    }
    static void classinfo()
    {
        cout << "hi i am student class ..." << endl;
        cout << "setstudent() method " << endl;
        cout << "resultcard() method " << endl;
        cout << "totalresult() method " << endl;
        cout << "disp_total_std() method " << endl;
    }
    static void average(student obj1, student obj2)
    {
        float avg;
        avg = (obj1.per + obj2.per) / 2.0;
        cout << "average of " << obj1.name << " and " << obj2.name << " = " << avg << endl;
    }
    static void greater_score(student o1, student o2)
    {
        if (o1.per > o2.per)
        {
            cout << o1.name << " have greater score" << endl;
        }
        else
        {
            cout << o2.name << " have greater score" << endl;
        }
    }
};
int student::totalpass = 0;
int student::totalfail = 0;
int student::totalstd = 0;
int main()
{
    student::classinfo();
    student s1(101, "ram", 22),
        s2(102, "shyam", 90),
        s3(103, "krish", 12),
        s4(104, "rohan", 23),
        s5(105, "vaibhav", 5);
    student::disp_total_std();
    s1.resultcard();
    s2.resultcard();
    s3.resultcard();
    s4.resultcard();
    s5.resultcard();
    student::totalreasult();
    student::average(s1, s2);
    student::average(s3, s4);
    student::greater_score(s1, s2);
    student::greater_score(s3, s4);
    return 0;
}