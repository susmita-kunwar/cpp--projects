#include<iostream>
using namespace std;

class Shape
{   
    protected:
        int width, height;
    public:

        Shape(int a =0,int b =0)
            {
                width =  a;
                height = b;  
            }

        virtual void area()
            {
                cout<<"parent class area:"<<endl;
 
            }
};

class Rectangle : public Shape
{
    public:
        Rectangle(int a, int b)
            {
                width =  a;
                height = b;
            }

        void area()
            {
                cout<<"Area of Rectangle"<<(height*width)<<endl;
            }

};

     
class Triangle : public Shape
{
    public:
        Triangle(int a, int b)
            {
                width =  a;
                height = b;
            }

        void area()
            {
                cout <<"Area of Triangle:"<<(width*height)/2<<endl;
            }

};


int main()
{
    Shape *shape;
    Rectangle rec(12,30);
    Triangle tri(12,30);

    //store address of Rectangle
    shape = &rec;

    //call rectangle area
    shape ->area();

    //store address of Triangle
    shape = &tri;

    //call Triangle area
    shape ->area();

    return 0;
}