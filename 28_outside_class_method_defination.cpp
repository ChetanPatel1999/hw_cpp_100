//how to done class methods defination outside class
#include <iostream>
using namespace std;
class dog
{
    string name;
    int age;
    string color;

public:
    void setdog(string, int, string);
    void displaydog();
};
class emp
{
    int id;
    float sal;

public:
    void setemp()
    {
        cout << "enter emp info :" << endl;
        cout << "enter emp id :" << endl;
        cin >> id;
        cout << "enter emp sal :" << endl;
        cin >> sal;
    }
    void dispemp()
    {
        cout << "emp info :" << endl;
        cout << "emp id :" << id << endl;
        cout << "emp sal :" << sal << endl;
    }
};
void dog::setdog(string s1, int a, string s2)
{
    name = s1;
    age = a;
    color = s2;
}
void dog::displaydog()
{
    cout << "dog info ........" << endl;
    cout << "dog name : " << name << endl;
    cout << "dog age : " << age << endl;
    cout << "dog color : " << color << endl;
}
int main()
{
    dog d1, d2, d3;
    emp e1,e2;
    d1.setdog("wifi", 12, "red");
    d2.setdog("tommy", 8, "white");
    d3.setdog("puppy", 1, "brown");
    d1.displaydog();
    d2.displaydog();
    d3.displaydog();
    e1.setemp();
    e1.dispemp();
    return 0;
}