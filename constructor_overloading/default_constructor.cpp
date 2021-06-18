// programm of default constructor
# include<iostream>
using namespace std;

class construct
{
    public:
    float x,y;
    construct()
    {
        x = 20;
        y = 40;
    }

};
int main()
{
construct c;
cout <<"x:" <<c.x <<endl;
cout << "y:" <<c.y <<endl;
return 0;      
}
