// write data in file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write;
    // file open using open method
    string s = "this is a variable data";
    write.open("abc.txt");
    write << "hi this is c code for file handling" << endl;
    write << s << endl;
    write.close();
    return 0;
}