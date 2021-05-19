#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,x;
    float area,s;
   cout <<"enter side a:";
    cin >> a;
    cout <<"enter side b:";
    cin >> b;
    cout<<"enter side c:";
    cin >> c;
    s=(a+b+c)/2;
    x=(s*(s-a)*(s-b)*(s-c));
    area=pow(x,0.5);
    cout << "area of triangle is:"<<area;
    return 0;
}
