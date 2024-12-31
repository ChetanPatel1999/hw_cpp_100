#include<iostream>
using namespace std;
class complex
{
    int real;
    int image;
    public:
    void setcomplex(int a,int b)
    {
        real=a;
        image=b;
    }
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
    complex c1,c2,c3;
    c1.setcomplex(12,5);
    c1.dispcomplex();
    c2.setcomplex(8,7);
    c2.dispcomplex();
    c3=c1.sum(c2);
    c3.dispcomplex();
    cout<<"_____________________________________"<<endl;
    complex c4,c5,c6;
    c4.setcomplex(3,6);
    c5.setcomplex(5,7);
    c4.dispcomplex();
    c5.dispcomplex();
    c6=c4.sum(c5);
    c6.dispcomplex();
    return 0;
}