#include <iostream>
using namespace std;
struct pen
{
    string name;
    int price;
    float rating;
};
int main()
{
    pen p1, p2;
    p1.name = "cello";
    p1.price = 5;
    p1.rating = 3.5;
    cout << "pen info : " << endl;
    cout << "pen name :" << p1.name << endl;
    cout << "pen price :" << p1.price << endl;
    cout << "pen rating :" << p1.rating << endl;
    return 0;
}