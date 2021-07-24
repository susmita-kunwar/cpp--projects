# include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void print ()
        {
            cout <<"Animal class "<<endl;
        }
};

class Cow : public Animal
{

};


class Dog : public Animal
{

};


int main()
{
    int marks,rollno;
    float avg;
    char *str;
    Animal *anm;
    Cow cw;
    Dog dg;

    cout<<"type of marks is:"<<typeid(marks).name()<<endl;
    cout<<"type of Rollno is:"<<typeid(rollno).name()<<endl;
    cout<<"type of avg is:"<<typeid(avg).name()<<endl;
    cout<<"type of *str is:"<<typeid(*str).name()<<endl;
    cout<<"type of anm is:"<<typeid(anm).name()<<endl;
    cout<<"type of cw is:"<<typeid(cw).name()<<endl;
    cout<<"type of dg is:"<<typeid(dg).name()<<endl;

    cout <<"***************************************************:"<<endl;
    
    anm = &cw;
    cout <<"type of *anm when pointing to cw:"<<typeid(*anm).name()<<endl;

    anm = &dg;
    cout <<"type of *anm when pointing to dg:"<<typeid(*anm).name()<<endl;
    


}
