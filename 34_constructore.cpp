#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    static int ecount;
    public:
    emp(int a,float b)
    {
        id=a;
        sal=b;
        ecount++;
    }
    void display()
    {
        cout<<"emp info : "<<endl;
        cout<<"emp id :"<<id<<endl;
        cout<<"emp sal :"<<sal<<endl;
    }
    static void emp_count()
    {
        cout<<"total emp : "<<ecount<<endl;
    }
};
int emp::ecount=0;
int main()
{
    emp e1(101,12000),e2(102,5000),e3(103,4500);
    emp::emp_count();
    e1.display();
    e2.display();
    e3.display();
    return 0;
}