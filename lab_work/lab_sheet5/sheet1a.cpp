# include <iostream>
using namespace std;

class Fibonacci 
{
    int a,b,c;
        public:
            Fibonacci()
                {
                    a = 0;
                    b = 1;
                    c = 0;
                }
            void operator++()      // Overload ++ when used as prefix
            {
                cout << a <<" ,";
                c = a+b;
                a = b;
                b = c;
            }          
};

int main()
{
    Fibonacci f;
    int i,n;
    cout<<"\n enter the number of n:"<<endl;
    cin >>n;

    for(int i = 1; i <=n; i++)
    {
        ++f;
    }
    return 0;

}