# include <iostream>
using namespace std;

class prefix
{
    int num;

    public:
    void getdata(int num1)
    {
        num = num1;   
    }
    prefix operator ++()
    {
        prefix result;
        result.num = ++num;
        return result;
    }

    void display()
    {
        cout <<"result:" <<endl;
    }
};

int main()
{
    prefix obj,result;
    result = ++obj;
    obj.display();
    return 0;
}
