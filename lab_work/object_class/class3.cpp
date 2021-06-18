# include <iostream>
using namespace std;

class interest {
    public:
    int t;
    float r,p;
    void set()
    {
        cout << "enter principle amount and number of year:"<<endl;
        cin >> p >> t;
    }
    void get(float r)
    {
        float simple;
        simple = (p*r*t)/100;
        cout << "simple interest is:" << simple <<endl;
    }
};
    int main()
    {
        interest s;
        s.set();
        s.get(15);
        return 0;

    }