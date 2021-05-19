#include <iostream>
#include <math.h>
using namespace std;
int main() { 
    int a,b,c,x;
    float s,area;
    cout <<" enter a,b,c and s:";
    cin >> a;
    cout << "enter value of a:";
    cin >> b;
    cout << "enter value of b:";
    cin >> c;
    cout << "enter value of c:";
    s=(a+b+c)/2;
    x=(s*(s-a)*(s-b)*(s-c));
    area=pow(x,0.5);
    cout << "area of triangle is:"<<area;
    return 0;
}