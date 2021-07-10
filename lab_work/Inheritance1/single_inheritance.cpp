#include<iostream>
using namespace std;

class Animal  // base class or parent class
{
    public:
        void eat()   // This is the function of animal ie eating
            {
                cout <<"eating:"<<endl;
            }

};

class Dog: public Animal  
                                     // child class or derived class. This class can accquired or access some data from parent class ie heredity
                                     // they also have other property differ than parent class.
{
    public:
        void bark()  
        {
            cout <<"barking:"<<endl;
        }
}; 

int main(void)
{
    Dog d1;   // accessing function like eating from their parent class by making Dog class object d1.

    d1.eat();

    d1.bark();

    return 0;

}