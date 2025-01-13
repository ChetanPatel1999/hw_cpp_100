#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float fees;
    public:
    void setdata(string s,int a,float b)
    {
        name=s;
        rno=a;
        fees=b;
    }
    void disp_std()
    {
        cout<<"student info : "<<endl;
        cout<<"student name : "<<name<<endl;
        cout<<"student rno : "<<rno<<endl;
        cout<<"student fees : "<<fees<<endl;
    }
};
class mathstd :public student
{
    int math;
    int pysics;
    int chemastry;
    void setmark()
    {

    }
    void disp_marks()
    {

    }
};
int main()
{
    return 0;
}