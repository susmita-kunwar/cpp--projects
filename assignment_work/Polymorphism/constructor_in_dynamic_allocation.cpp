# include<iostream>
using namespace std;

class Animal
{
    public:
    virtual ~Animal()
        {
            cout <<"Animal class of destructor is called"<<endl;

        }
};

class Dragon : public Animal
{   
    public:
        ~Dragon()
        {
            cout <<"dragon class destructor is called"<<endl;
        }
};

int main()
{
    Animal *animal = new Dragon;
    delete animal;
    return 0;
}


/*dragon class destructor is called
Animal class of destructor is called  */