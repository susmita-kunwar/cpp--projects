// Multilevel inheritance without parameterized constructor and destructor.

# include <iostream>
using namespace std;

class A  //base class of B
{
    public:

    A()
    {
        cout<<"constructor of class A called:"<<endl;
    }

    ~A()
    {
        cout<<"destructor of class A called:"<<endl;
    }
};

class B : public A  // base class of C and derived class of A
{
    public:

    B()
    {
        cout<<"constructor of class B called:"<<endl;
    }

    ~B()
    {
        cout<<"destructor of class B called:"<<endl;
    }
};  

class C : public B   // derivated class of B  
{
    public:

    C()
    {
        cout<<"constructor of class C called:"<<endl;
    }

    ~C()
    {
        cout<<"destructor of class C called:"<<endl;
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
destructor of class A called:  */