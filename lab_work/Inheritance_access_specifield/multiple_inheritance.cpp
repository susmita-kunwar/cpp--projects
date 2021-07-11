/* mutiple inheritance without parameterized constructor and destructor */

# include <iostream>
using namespace std;

class A
{
    public:

    A()
    {
        cout <<" constructor of class A called:"<<endl;
    }

    ~A()
        {
            cout <<" destructor of class A called:"<<endl;
        }
    
};

class B 
{
    public:

    B()
    {
        cout <<"constructor of class B called:"<<endl;
    }

    ~B()
    {
        cout <<"destructor of class B called:"<<endl;
    }
};

class C :public A , public B
{
    public:

    C()
    {
        cout <<"constructor of class C called:"<<endl;
    }

     ~C()
    {
        cout <<"destructor of class C called:"<<endl;
    }
};

int main()
{
    C c1;

    return 0;
}


/*
constructor of class A called:
constructor of class B called:
constructor of class C called:
destructor of class C called:
destructor of class B called:
destructor of class A called:  */    // ie first in last out
