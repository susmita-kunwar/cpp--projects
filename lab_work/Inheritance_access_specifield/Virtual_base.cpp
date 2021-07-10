# include <iostream>
using namespace std;

class A
{
    int a;
    public:
    void displaya()
        {
            a = 2;
            cout <<"class A:"<<a<<endl;
        }

};

class B : public virtual A
{
    int b;
    public:
    void displayb()
        {
            b = 3;
            cout <<"class B:"<<b<<endl;
        }

};

class C : public virtual A
{
    int c;
    public:
    void displayc()
      {
         c = 4;
         cout <<"class C:"<<c<<endl;
      }
};

class D : public B, public C 
{
    int d;
    public:
    void displayd()
        {
            d = 5;
            cout <<"class D:"<<d<<endl;
        }

};

int main()
{
    D d1;

    d1.displaya(); // ambiguous

    d1.displayb();

    d1.displayc();

    d1.displayd();

    return 0;
}