#include <iostream>
# include <conio.h>
using namespace std;
void swap(int *, int *);

int main()
{
    int a,b,num;
    cout << "enter the numbers:" <<endl;
    cin >> a >> b;
    cout << "before swapping:"<< endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(&a, &b);
    cout << "after swapping:" <<endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
void swap(int *a, int *b)
{
int num;
num = *a;
*a = *b;
*b = num;
}
