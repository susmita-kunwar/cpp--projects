#include <iostream>
# include <conio.h>
using namespace std;

int main()
{
    int a,b,num;
    cout << "before swapping:" << endl;
    cout << "enter value of a:";
    cin >> a;
    cout << "enter value of b:";
    cin >>b;
    num = a;
    a = b;
    b = num;
    cout << "after swapping:" << endl;
    cout << "a =" << a << ",b =" << b << endl;
    return 0;

}
