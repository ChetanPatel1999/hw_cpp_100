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
    void setstd(int a, string s, float p)
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
        cout<<"hi i am student class ..."<<endl;
        cout<<"setstudent() method "<<endl;
        cout<<"resultcard() method "<<endl;
        cout<<"totalresult() method "<<endl;
        cout<<"disp_total_std() method "<<endl;
    }
};
int student::totalpass = 0;
int student::totalfail = 0;
int student::totalstd = 0;
int main()
{
    student::classinfo();
    student s1, s2, s3, s4, s5;
    s1.setstd(101, "ram", 22);
    s2.setstd(102, "shyam", 90);
    s3.setstd(103, "krish", 12);
    s4.setstd(104, "rohan", 23);
    s5.setstd(105, "vaibhav", 5);
    student::disp_total_std();
    s1.resultcard();
    s2.resultcard();
    s3.resultcard();
    s4.resultcard();
    s5.resultcard();
    student::totalreasult();
    return 0;
}