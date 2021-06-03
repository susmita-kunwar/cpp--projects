# include <iostream>
# include <math.h>
using namespace std;

void area_triangle (float,float );
int main()
 {
   float b,h;
   cout << "enter sides of the triangle:" << endl;
   cout << "enter b:" << endl;
   cin >> b;
   cout << "enter h:" << endl;
   cin >> h;
   area_triangle (b, h);
   cout << "area of triangle:" << endl;
   return 0;
  }
    void area_triangle(float b, float h ) 
     {
           float area;
           area = 0.5*(b*h);
            
     }



