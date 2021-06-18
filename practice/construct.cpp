# include<iostream>
using namespace std;

class construct
{
    public:
    float a,b;
    construct()
    {
        a = 20;
        b = 40;
    }

};
int main()
{
construct c;
cout <<"a:" <<c.a <<endl;
cout << "b:" <<c.b <<endl;
return 0;
}
