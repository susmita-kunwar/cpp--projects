# include <iostream>
using namespace std;

float area_triangle();
int main()
 {
  float area;
  area = area_triangle();
  cout <<"area of triangle is :" << area <<endl;
  return 0;
 }

 float area_triangle()
 {
  float area,b,h;
  cout << "enter sides of triangle:" <<endl;
  cout << "enter side b:";
  cin >> b;
  cout << "enter side h:";
  cin >> h;
  area = 0.5*(b*h);
  return area;
}


