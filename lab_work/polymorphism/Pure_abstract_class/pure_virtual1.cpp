# include <iostream>
using namespace std;

class Animal                    // As a whole it is abstract class
{
    public:
        virtual void move() = 0;   //pure virtual function.
        void show()
            {
                cout <<"This is function inside abstract class ";
            }
};

class Cow : public Animal
{
    public:
    void move()
        {
            cout <<"Cow walk"<<endl;
        }
};

int main()
{
    /*Animal b;     cannot declare variable 'b' to be of abstract type 'Animal' */

    Animal *bptr;   // know we can access
    bptr -> show();
    return 0;
}