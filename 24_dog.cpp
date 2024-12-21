#include <iostream>
using namespace std;
class dog
{
    string name;
    int age;
    string color;

public:
    void setdog()
    {
        cout << "enter dog info : " << endl;
        cout << "enter dog name : " << endl;
        cin >> name;
        cout << "enter dog age : " << endl;
        cin >> age;
        cout << "enter dog color : " << endl;
        cin >> color;
    }
    void displaydog()
    {
        cout << "dog info ........" << endl;
        cout << "dog name : " << name << endl;
        cout << "dog age : " << age << endl;
        cout << "dog color : " << color << endl;
    }
};
int main()
{
    dog d1, d2, d3;
    d1.setdog();
    d2.setdog();
    d3.setdog();
    d1.displaydog();
    d2.displaydog();
    d3.displaydog();
    return 0;
}