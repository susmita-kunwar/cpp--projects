# include <iostream>
using namespace std;

class add
{
    private:
    float a,b,c;
    public:
        void getdata(float x, float y, float z)
            {
                a = x;
                b = y;
                c = z;
            }
            void operator++()
                {
                    a = a+5;
                    b = b+6;
                    c = c+7;
                }
                void display()
                    {
                    
                        cout <<"enter the value of a:"<<a <<endl;
                        cout <<"enter the value of b:"<<b <<endl;
                        cout <<"enter the value of c:"<<c <<endl;
                    }
};
int main()
{
    add a1;
    a1.getdata(3,4,5);
    a1.display();
    ++a1;
    a1.display();
    return 0;
}

