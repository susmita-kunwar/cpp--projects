# include <iostream>
using namespace std;

class Animal                    // As a whole it is abstract class
{
    public:
        Animal()
            {
                cout << "constructor is called"<<endl;
            } 

        virtual void Move() = 0;
    
        void display()
            {
                cout <<"This is function inside abstract class ";
            }
};

class Cow : public Animal
{
    public:
    void Move()
        {
            cout <<"Cow walk"<<endl;
        }
};

int main()
{
    Animal *a;
    Cow c;
    c.Move();
    a -> display();

    return 0;
}