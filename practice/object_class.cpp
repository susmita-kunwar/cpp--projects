# include <iostream>
using namespace std;

class Room {
    public:
    float length ;
    float breadth ;
    float height ;

    float calculatearea()
    {
        return length* breadth;
    }

     float calculatevolume()
    {
        return length* breadth* height;
    }
};
    int main()
    {
        Room room1 ;
        room1.length = 10;
        room1.breadth = 30;
        room1.height = 20;

        cout <<"area of room" <<room1.calculatearea() << endl;
        cout <<"volumeof room" <<room1.calculatevolume() << endl;
        return 0;

    }