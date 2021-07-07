# include <iostream>
using namespace std;

class distance1
{
    private:
    //member object
    int feet,inch;

    public:
    
        distance1()  // constructor
        {
            this->feet = 0;
            this->inch = 0;
        }
        distance1 (int f, int i)  // parameterized
        {
            this->feet = f;
            this->inch = i;
        }

        void display()
        {
            cout <<"feet:" <<feet <<" " <<"inch:" <<inch << endl;
        }

        //declearing friend function.
        friend distance1 operator+(distance1&, distance1&);
        
};

//implementing friend function with two parameter.

distance1 operator+(distance1& d1, distance1& d2)
{
    distance1 d3;
    //'this' may only be used inside a nonstatic member function.

    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    return d3;
}
 int main()
 {
     distance1 d1(2,3);
     distance1 d2(4,5);
     distance1 d3;
     d3 = d1 + d2;
     d3.display();

 }