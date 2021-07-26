#include <iostream>
using namespace std;

const int MAX = 20;
template <class T>
class stack
{
    private:
    T arr[MAX];
    int top;
    public:
    stack()
        {
            top = -1;
        }

    void push (T data)
        {
            arr[++top] = data;
        }

    T pop()
        {
            return arr[top--];
        }

    int size()
        {
            return (top+1);
        }
};

int main()
{
    cout <<"stack for floating data type"<<endl;
    stack<float>s1;
    cout <<"size of stack:"<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout <<"size of stack:"<< s1.size()<<endl;;
    cout <<"number poped:"<<s1.pop()<<endl;
    cout <<"number poped:"<<s1.pop()<<endl;
    cout <<"size of stack:"<<s1.size()<<endl;
    cout <<"stack for integer data:"<<s1.size()<<endl;
    stack<int>s2;
    cout <<"size of stack:"<<s1.size()<<endl;
    s1.push(44);
    cout <<"number poped:"<<s1.pop()<<endl;
    cout <<"number poped:"<<s1.pop()<<endl;
    
}






