// If derived class (child class) defines same function as defined in it's base class (parent class) , it is known as function overriding.

#include<iostream>
using namespace std;

class Animal  // base class or parent class
{
    public:
        void eat()   // This is the function of animal ie eating
            {
                cout <<"eating of Animal:"<<endl;
            }

};

class Dog : public Animal  
                                     // child class or derived class. This class can accquired or access some data from parent class ie heredity
                                     // they also have other property differ than parent class.
{
    public:
        void eat()  
        {
            cout <<"barking of Dog:"<<endl;
        }
};

class Cow 
{
    public:
    void eat()
    {
        cout <<"Cow gives milk:"<<endl;
    }
};   

int main()
{
    Dog d1; 
    Cow c1;
                                               // accessing function like eating from their parent class by making Dog class object d1.
    d1.eat();                                  // ie class Dog function member eat() override class Animal function member eat().
    
    c1.eat();


    //d1.Animal :: eat();                     // by doing this we call member function of class Animal.
    //d1.bark();

    return 0;

}
