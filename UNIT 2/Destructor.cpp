#include <iostream>
using namespace std;
class Demo
{
    int x;
    public:
       Demo(int a)
       {
        x=a;
        cout<<"constructor called,x="<<x<<endl;
       }
       Demo()
       {
        cout<<"destructor called for object with x="<<x<<endl;
       }
};
int main()
{
    Demo d1(5),d2(10),d3(15);
    cout<<"object are going out of scope:"<<endl;
    return 0;
}