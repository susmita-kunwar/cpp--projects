# include <iostream>
using namespace std;

class distance1
{
    private:
    //member objects
    int feet,inch;

    public:
    distance1()
    {
        feet = 0;
        inch = 0;
    }
    //parameterized

    distance1(int feet, int inch)
    {
        this->feet = feet;
        this->inch = inch;
    }
    //overloading +operator to perform addition

    distance1 operator +(distance1& d2)
    {
        distance1 d3;
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;
        return d3;
    }

    void display()
    {
         cout <<"feet:"<<feet<<" "<<"inch:"<<inch<<endl;
    }
};

int main()
{
    distance1 d1(2,3);
    distance1 d2(2,3);
    distance1 d3;
    d3 = d1 + d2;
    d3.display();
    return 0;
}