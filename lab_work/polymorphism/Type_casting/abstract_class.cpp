# include <iostream>
using namespace std;

class Base
{
    int x;   
    public:
    virtual void fun() = 0;
    int getx()
        {
            return x;
        }

};

// This class inherits from Base and implements fun()
class Derived : public Base
{
    int y;
    public:
    void fun()
        {
            cout <<"fun function call:"<<endl;
        }

};

int main()
{
    Derived d;
    d.fun();
    return 0;
}