// write data in file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // file open using constructor
    ofstream write("xyz.txt");
    string s = "this is a variable data";
    write << "hi this is c code for file handling" << endl;
    write << s << endl;
    write.close();
    return 0;
}