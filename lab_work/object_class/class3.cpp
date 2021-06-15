# include <iostream>
using namespace std;

class interest {
    public:
    int t;
    float r,p;
    void get()
    {
        cout << "enter principle amount and number of year:"<<endl;
        cin >> p >> t;
    }
    void display(float r)
    {
        float simple;
        simple = (p*r*t)/100;
        cout << "simple interest is:" << simple <<endl;
    }
};
    int main()
    {
        interest s;
        s.get();
        s.display(0.15);
        return 0;

    }