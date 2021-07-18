# include <iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout <<"Base class constructor is called"<<endl;
        }

        virtual ~Base()
        {
            cout <<"Base destructor is called"<<endl;
        }

};

class Derived : public Base
{   
    public:
    Derived()
    {
        cout <<"Derived class constructor is called"<<endl;
    }

    ~Derived()
    {
        cout <<"derived destructor is called"<<endl;
    }

};

int main()
{
    Base *bBase = new Derived;
    delete bBase;
    return 0;
}




/*Base class constructor is called
Derived class constructor is called
derived destructor is called
Base destructor is called  */