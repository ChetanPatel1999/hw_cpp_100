// copy constructor 
#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    emp(int a,float b)
    {
       id=a;
       sal=b;
    }
    emp(emp &obj)  // copy constructor 
    {
        cout<<"copy constructor is called"<<endl;
        id=obj.id+1;
        sal=obj.sal+2000;
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
    emp e1(101,5000),e2(e1);
    e1.display();
    e2.display();
    return 0;
}