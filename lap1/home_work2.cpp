#include <iostream>
#include <math.h>
using namespace std;
int main() { 
    int a,b,c;
    float s,area;
    cout <<" enter a,b,c and s:";
    cin >> a>> b>> c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "area of triangle is:"<<area;
    return 0;
}