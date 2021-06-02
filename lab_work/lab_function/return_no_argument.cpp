# include <iostream>
using namespace std;

void area ();
int main() {

    area ();
    return 0;
          }
          void area () {
            int b,h;
            float num;
            cout << "enter sides of the triangle:" << endl;
            cout << "enter b:" << endl;
            cin >> b;
            cout << "enter h:" << endl;
            cin >> h; 
            num = 0.5*(b*h);
            cout << "area of triangle is:"<< num;

                      }


