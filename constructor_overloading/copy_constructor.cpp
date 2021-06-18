// The copy constructor in C++ is used to copy data of one object to another.

#include <iostream>
using namespace std;

class floor {
   private:
    float length;
    float height;

   public:
    floor(float l, float h) {
        length = l;
        height = h;
    }

    floor(floor &obj) {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {

    floor floor1(200.5, 305.5);

    cout << "Area of floor 1: " << floor1.calculateArea() << endl;

    floor floor2 = floor1;

    cout << "Area of floor 2: " << floor2.calculateArea() << endl;

    return 0;
}
