# include <iostream>
using namespace std;

class Room 
{
    private:
    float length ;
    float breadth ;
    float height ;

    public:
    float setarea(float len, float bre, float heig)
    {
        length = len;
        breadth = bre;
        height = heig;
    }

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
        Room myroom;
        myroom.setarea(25.5, 30.5, 10.5);
        cout <<"area of my room is:" <<myroom.calculatearea() << endl;
        cout <<"volumeof my room is:" <<myroom.calculatevolume() << endl;

    }