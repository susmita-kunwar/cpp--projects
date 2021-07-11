// Hybrid inheritance is a combination of hierachical inheritance and multiple inheritance.


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

class D : public C
{
    public:

    D()
    {
        cout <<"constructor of class D called:"<<endl;
    }

    ~D()
    {
        cout <<"destructor of class D called:"<<endl;
    }
};

class E : public C
{
    public:

    E()
    {
        cout <<"constructor of class E called:"<<endl;
    }

    ~E()
    {
        cout <<"destructor of class E called:"<<endl;
    }
};

int main()
{
    //C c1;  // same as multiple inheritance 

    //D d1;  // same as hierachical inheritance

    E e1;   // same as hierachical inheritance

    return 0;
}

/*
constructor of class A called:
constructor of class B called: 
constructor of class C called:
constructor of class E called:
destructor of class E called:
destructor of class C called:
destructor of class B called:
destructor of class A called:  */