//WAP to add two complex numbers passing object as an argument and returning resultant complex number
# include<iostream>

using namespace std;
class complex {
    public:
    double r,i;
};
complex sum (complex c1, complex c2)
{
    complex c;
    c.r = c1.r + c2.r;
    c.i = c1.i + c2.i;
    return c;
    }
int main()
{
    complex c1,c2,c3;
    cout <<"enter real and imaginary number of first complex:"<<endl;
    cin >> c1.r >> c1.i;
    cout <<"enter real and imaginary number of second complex:"<<endl;
    cin >> c2.r >> c2.i;
    c3 = sum(c1, c2);
    cout <<"the sum is:" << c3.r <<"+i"<< c3.i<<endl;
    return 0;
}
