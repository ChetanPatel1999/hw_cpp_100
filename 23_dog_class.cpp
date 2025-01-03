#include <iostream>
using namespace std;
class dog
{
  string name;
  int age;
  string color;

public:
  dog(string s1, int a, string s2)
  {
    name = s1;
    age = a;
    color = s2;
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
  dog d1("wifi", 12, "red"),
      d2("tommy", 8, "white"),
      d3("puppy", 1, "brown"),
      d4("moti", 9, "brown");
  d1.displaydog();
  d2.displaydog();
  d3.displaydog();
  return 0;
}