# include <iostream> 
using namespace std;
 
class A
 
{
 
    public:
 
    A(void)
 
    {
        cout<<" Constructor of the base class A"<<endl;

    }
 
    ~A()
 
    {
 
        cout<<" Destructor of the base class A "<<endl;
 
    }
 
   
 
};
 
class B : public A
 
{
 
    public:
 
    B(void)
 
    {
        cout<<" Constructor of the derive class B "<<endl;
 
    }
 
    ~B()
 
    {
 
        cout<<" Destructor of the derive class B"<<endl;
 
    }
 
};
 
 
 
 
main ()
 
{
 
  B obj;
 
}