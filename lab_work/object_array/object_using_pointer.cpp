# include<iostream>
using namespace std;

class box
{
    public:
    double length, breadth, height;

    public:
    box(double len, double bread, double hgt)
    {
        cout <<"constructor is called" <<endl;
        length = len;
        breadth = bread;
        height = hgt;
    }
    double volume()
    {
        return length*breadth*height;

    }

};

int main()
{
    box box1(10.5,20.5,30.5);
    box box2(20.5,30.5,10.5);
    class box *ptrbox;
    cout <<"Address of box1 variable:"<< &box1 <<endl;
    
    // pointer yesto khalko ho jasle haru variable ko address lai aaphu sanga carry garna sakxa.
    // In this case, box1 variable ko address lai ptrbox variable le carry garana sakxa.

    ptrbox = &box1;
    cout <<"volume of box1 is:" << ptrbox ->volume() <<endl;

    // access the member function using member access operator (->)
    // save the address of box2.

    ptrbox = &box2;
    cout <<"volume of box2 is:" << ptrbox ->volume() <<endl;
    return 0;
}