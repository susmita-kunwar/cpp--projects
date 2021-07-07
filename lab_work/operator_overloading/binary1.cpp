# include <iostream>
using namespace std;

class binary
{
    private:
    int a,b;

    public:
    binary()
    {
        a = 0;
        b = 0;
    }
     
    binary(int x, int y)
    {
        a = x;
        b = y;
    } 

    binary operator +(binary bin)
    {
        binary temp;

        cout << "Value of temp num1 inside overloading function " << temp.a << endl;
        cout << "Value of temp num1 inside overloading function " << temp.b << endl;

        cout << "Value of bin num1 inside overloading function " << bin.a << endl;
        cout << "Value of bin num1 inside overloading function " << bin.b << endl;

        temp.a = a + bin.a;
        temp.b = b + bin.b;

        return temp;

    }
    
    void display();

};

void binary::display()
{
    cout <<"value of a:"<< a <<endl;
    cout <<"value of b:"<< b <<endl;
}

int main()
{
   binary b1, b2, b3;
    b1 = binary(10, 20);
    b2 = binary(30, 40);

    b3 = b1 + b2;

    b1.display();

    b2.display();
    
    b3.display();

    return 0;
}
