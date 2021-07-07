# include<iostream>
using namespace std;

class complex
{
    int real,imag;

public:
    void getdata()
    {
       cout<<"enter complex number:"<<endl;
       cout<<"real:";
       cin >>real;
       cout<<"imaginary:";
       cin >>imag;
    }
    complex operator +(complex num1)
    {
        complex num;
        num.real = real + num1.real;
        num.imag = imag + num1.imag;
        return num;
    }

    void display()
    {
        cout<<"result:" << real <<" + j" << imag <<endl;
    }


};

int main()
{
    complex d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3 = d1 + d2;
    d3.display();
    return 0;
}