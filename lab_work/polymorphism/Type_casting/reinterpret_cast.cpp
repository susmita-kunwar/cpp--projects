# include<iostream>
using namespace std;

int main()
{
    int i = 100;

    cout<<"value of address of i:"<<&i;
    int *p;
    //p = i;

    p = reinterpret_cast <int *>(i);

    cout <<"value of p is :"<<p;
}

