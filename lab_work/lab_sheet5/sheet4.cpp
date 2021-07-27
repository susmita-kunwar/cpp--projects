# include <iostream>
using namespace std;

class Shape
{
    protected:
    int length, breadth;
        public:
            void getdata(int x =0, int y =0)
                {
                    length = x;
                    breadth = y;
                }

            virtual void display_Area()
                {
                    cout << "Parent class area:"<<endl;
                }
};

class Square  : public Shape
{
    int length,breadth;
        public:
            void getdata(int x, int y)
                {
                    length = x;
                    breadth = y;
                }

            void display_Area()
                {
                    cout << "Area of square is:"<< length *length <<endl;
                }
};

class Rectangle  : public Shape
{
    int a,b;
        public:
            void getdata(int x, int y)
                {

                   length = x;
                   breadth = y; 
                }

            void display_Area()
                {
                    cout << "Area of Rectangle is:"<< length*breadth <<endl;
                }
};

class Triangle : public Shape
{
    int a,b;
        public:
            void getdata(int x, int y)
                {
                    length = x;
                    breadth = y;  
                }

            void display_Area()
                {
                    cout << "Area of Triangle is:"<< (length*breadth)/2 <<endl;
                }
};


int main()
{
    Shape *shape;

    Square sqt;
    sqt.getdata(2,3);
    shape = &sqt;
    shape -> display_Area();

    Rectangle rec;
    rec.getdata(2,3);
    shape = &rec;
    shape -> display_Area();

    Triangle tri;
    tri.getdata(2,3);
    shape = &tri;
    shape -> display_Area();



    
}
    