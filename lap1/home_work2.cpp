#include <iostream>
#include <math.h>
using namespace std;
int main() { 
    int a,b,c,x;
    float s,area;
    cout <<" enter a,b,c and s:";
    cin >> a;
    cin >>b;
    cin >>c;
    s=(a+b+c)/2;
    x=(s*(s-a)*(s-b)*(s-c));
    area=pow(x,o.5);
    cout << "area of triangle is:"<<area;
    return 0;
}