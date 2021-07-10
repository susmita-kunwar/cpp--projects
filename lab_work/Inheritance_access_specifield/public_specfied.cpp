# include <iostream>
using namespace std;

// Defining class
class Area
{
    public:
    double radius;
    double getdata()
    {
        return 3.14*radius*radius;
    }

};
// main function
int main()
{
    Area obj;
    // accessing public data member outside the class

    obj.radius = 10;

    cout <<"the radius is:" <<obj.radius <<endl;

    cout <<"the area is:" <<obj.getdata() <<endl;
    
    return 0;

}