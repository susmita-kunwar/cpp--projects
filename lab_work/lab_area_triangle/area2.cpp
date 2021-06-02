#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float b,h;
    float area;
    cout <<"enter sides of triangle:";
    cin >> b;
    cin >> h;
    area = 0.5*(b*h);
    cout << "area of triangle is:"<<area;
    return 0;
}
