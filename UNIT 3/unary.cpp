#include<iostream>
class counter
{
    private:
     int count;
    public:
     counter(int c=0):count(c){}
     void display () const
     {
        std::cout<<"cout:"<<count<<std::endl;
     }
     counter operator++(int)
     {
        counter temp (*this);
        return temp;
     }
};
int main()
{
    counter c1(10);
    counter c2;
    std::cout<<"intial c1:";
    c1.display();
    c2=c1;
    std::cout<<"\nAterc2=c1++;"<<std::endl;
    std::cout<<"c1(incremente):",c1.display();
    std::cout<<"c2(old value):",c2.display();
    return 0;
}

