# include <iostream>
using namespace std;

void area();
int main()
 {

  area ();
  cout << "area of triangle is:"<< endl;
  return 0;
 }

 void area () 
 {
  int b,h;
  float num;
  cout << "enter sides of the triangle:" << endl;
  cout << "enter b:";
  cin >> b;
  cout << "enter h:";
  cin >> h; 
  num = 0.5*(b*h);

 }


