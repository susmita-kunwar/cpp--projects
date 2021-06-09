# include <iostream>
using namespace std;

float area_triangle(float, float);
int main()
 {
  float area,b,h;
  cout << "enter sides of triangle:" <<endl;
  cout << "enter side b:";
  cin >> b;
  cout << "enter side h:";
  cin >> h;
  area = area_triangle(b, h);
  cout <<"area of triangle is :" << area <<endl;
  return 0;
 }

 float area_triangle(float b, float h)
 {
  float area;
  area = 0.5*(b*h);
  return area;

 }


