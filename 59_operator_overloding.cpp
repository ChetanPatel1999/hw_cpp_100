#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    complex(int a, int b)
    {
        real = a;
        image = b;
    }
    complex() {}
    void dispcomplex()
    {
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.image = image - obj.image;
        return res;
    }
};
int main()
{
    complex c1(12, 5), c2(8, 7), c3;
    c1.dispcomplex();
    c2.dispcomplex();
    c3 = c1 + c2;
    c3.dispcomplex(); 
    return 0;
}