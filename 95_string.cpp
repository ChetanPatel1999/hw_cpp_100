// append
#include <iostream>
using namespace std;
int main()
{
    string s1 = "string",s2="home";
    cout << "string : " << s1 << endl;
    s1.append("patel");
    s1.append(s2);
    cout << "string : " << s1 << endl;
    return 0;
}