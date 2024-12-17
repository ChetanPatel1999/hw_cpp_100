// wap to print reverse number of given number.
#include <iostream>
using namespace std;
int main()
{
    int num, i,rev=0,rem;
    cout << "enter a num : ";
    cin >> num; // 546
    while(num)
    {
      rem=num%10;//5
      rev=rev*10+rem;//645
      num=num/10;//0
    }
    cout<<"reverse number : "<<rev<<endl;
    return 0;
}