# include <iostream>
using namespace std;

class Base
{
    public:
        virtual void print()
        { 

            cout <<"Base"<<endl;
        }

};

class Derived : public Base
{
    public:
         void print()
        { 

            cout <<"Derived"<<endl;
        }

};