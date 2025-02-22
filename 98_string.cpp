#include<iostream>
using namespace std;
int main()
{
  string s1;
  s1="chetan";
  cout<<s1<<endl;
  s1.push_back(65);
  s1.push_back('P');
 // s1.pop_back();// delete a character at last
  cout<<s1<<endl;
  s1.clear();
  cout<<s1<<"-----"<<endl;
  s1.push_back('R');
  cout<<s1;
  return 0;
}