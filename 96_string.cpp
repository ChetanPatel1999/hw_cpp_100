#include <iostream>
using namespace std;
int main()
{
    string city[5] = {"indore", "ujjain", "rau", "ratlam", "dewas"};
    int i;
    string citys;
    for (i = 0; i < 5; i++)
    {
        cout << city[i] << endl;
        citys.append(city[i]);
        if(i!=4)
        {
            citys.append("<---->");
        }
    }
    cout<<citys<<endl;
    for(i=0;i<5;i++)
    {
        if(city[i][0]=='r')
        {
            cout<<city[i]<<endl;
        }
    }
    return 0;
}