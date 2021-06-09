# include <iostream>
using namespace std;

void area_triangle(float, float);
int main()
 {
  float b,h;
  cout << "enter sides of triangle:" <<endl;
  cout << "enter side b:";
  cin >> b;
  cout << "enter side h:";
  cin >> h;
  area_triangle(b, h);
  cout <<" area of triangle is :" << endl;
  return 0;
 }

   void area_triangle(float b, float h)
 {
    float area;
    area = 0.5*(b*h);
 }


