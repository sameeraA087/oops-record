#include<iostream>
using namespace std;

class Demo
{
    int x;

public:
    // Default constructor
    Demo()
    {
        x = 0;
        cout << "Default constructor called, x = " << x << endl;
    }

    // Parameterized constructor
    Demo(int a)
    {
        x = a;
        cout << "Parameterized constructor called, x = " << x << endl;
    }

    // Copy constructor
    Demo(Demo &d)
    {
        x = d.x;
        cout << "Copy constructor called, x = " << x << endl;
    }
};

int main()
{
    Demo d1;       // Calls default constructor
    Demo d2(10);   // Calls parameterized constructor
    Demo d3(d2);   // Calls copy constructor
    return 0;
}
