#include<iostream>
using namespace std;
class book
{
    public:
    string tittle;
    string author;
    float price;
    void display ()
    {
        cout<<"Tittle:"<<tittle
            <<",Author:"<<author
            <<",Price:"<<price<<endl;
    }
};
int main()
{
    book b1,b2;
    b1.tittle="c++ programming";
    b1.author="Bjarne stroustup";
    b1.price=750.50;
    b2.tittle="data struture";
    b2.author="malk allen weiss";
    b1.display();
    b2.display();
    return 0;
}