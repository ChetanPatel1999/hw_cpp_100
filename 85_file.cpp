// read file using cpp language
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("abc.txt");
    read >> s;
    cout << s << endl;
    read >> s;
    cout << s << endl;
    read.close();
    return 0;
}