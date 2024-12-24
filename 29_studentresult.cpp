#include<iostream>
using namespace std;
class student
{
    int rno;
    string name;
    float per;
    static int totelfail;
    static int totelpass;
    public:
    void setstd(int a, string s,float p)
    {
        rno=a;
        name=s;
        per=p;
    }
    void resultcard()
    {
        cout<<"result card of student*****"<<endl;
        cout<<"student rno : "<<rno<<endl;
        cout<<"student percentage : "<<per<<endl;
        if(per>33)
        {
           cout<<"student pass"<<endl;
        }
        else{
            cout<<"student fail"<<endl;
        }
        cout<<"_____________________________________"<<endl;
    }
};
int main()
{
  student s1,s2,s3;
  s1.setstd(101,"ram",56);
  s2.setstd(102,"shyam",90);
  s3.setstd(103,"krish",12);
  s1.resultcard();
  s2.resultcard();
  s3.resultcard();
  return 0;
}