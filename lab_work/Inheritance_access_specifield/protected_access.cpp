# include <iostream>
using namespace std;

class parent  // base class
{
    // protected data member
    protected:
    int id_protected;

};


class child: public parent // derived class from public class
{
    public:
    void gatedataId(int id)
    {
        /* child class are able to access inherited
           protected data member of base class */

        id_protected = id;
    }
    void displayId()
    { 
        cout <<"id_protected is:"<<id_protected;
    }
};



int main()
{
    child obj;

    obj.gatedataId(40);

    obj.displayId();
    
    return 0;
}