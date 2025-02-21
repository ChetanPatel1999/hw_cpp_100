// read file using cpp language
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("abc.txt");
    string s;
    while (getline(read, s)!=NULL)
    {
        cout << s << endl;
    }
    read.close();
    return 0;
}