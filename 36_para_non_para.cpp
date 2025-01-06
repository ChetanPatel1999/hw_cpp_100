// non parameterized constructor  and parameterized constructor  
#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    emp()// non parameterized constructor
    {
        id=101;
        sal=2000;
    }
    emp(int a,float b)// parameterized constructor
    {
       id=a;
       sal=b;
    }
    void display()
    {
        cout<<"emp info : "<<endl;
        cout<<"emp id : "<<id<<endl;
        cout<<"emp sal :"<<sal<<endl;
    }
};
int main()
{
    emp e1(102,5000),e2,e3(103,7000);
    e1.display();
    e2.display();
    e3.display();
    return 0;
}