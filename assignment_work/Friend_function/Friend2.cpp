//WAP to add two private data of two different classes.
# include <iostream>
using namespace std;

class Bank1
{
    private:
    int x;
    public:
    Bank1()
    {
        int a;
        cout <<"enter value of Bank1:";
        cin >> a;
        x = a;
    }
    void add(Bank2 obj2)      // if we make friend class bank1 then we should define add in class bank1 side.
    {
        int add;
        add =x + obj2.y;
        cout <<"add: "<< add << endl; 
    }
};

class Bank2
{
    friend class Bank1; // here class Bank1 can access private data of class bank2. 
    private:
    int y;
    public:
    Bank2()
    {
        int b;
        cout << "enter value of Bank2:";
        cin >> b;
        y = b;
    }
};
int main()
{
    Bank1 obj1;
    Bank2 obj2;
    obj1.add(obj2);
    return 0;

}