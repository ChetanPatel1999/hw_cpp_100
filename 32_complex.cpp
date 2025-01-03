#include<iostream>
using namespace std;
class complex
{
    int real;
    int image;
    public:
    complex(int a,int b)
    {
        real=a;
        image=b;
    }
    complex(){}
    void dispcomplex()
    {
        cout<<"complex number : "<<real<<" + "<<image<<"i"<<endl;
    }
    complex sum(complex obj)
    {
        complex res;
        res.real=real+obj.real;
        res.image=image+obj.image;
        return res;
    }
};
int main()
{
    complex c1(12,5),c2(8,7),c3;
    c1.dispcomplex();
    c2.dispcomplex();
    c3=c1.sum(c2);
    c3.dispcomplex();
    cout<<"_____________________________________"<<endl;
    complex c4(3,6),c5(3,6),c6;
    c4.dispcomplex();
    c5.dispcomplex();
    c6=c4.sum(c5);
    c6.dispcomplex();
    return 0;
}