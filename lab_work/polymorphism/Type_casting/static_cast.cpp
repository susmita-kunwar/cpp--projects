# include<iostream>
using namespace std;

int main()
{
    int i;
    float f = 4.5f;
    i = f;

    cout<<"value of float is:"<<f<<endl;

    cout<<"value of converted into integer is :"<<i<<endl;

    i = static_cast<int>(f);
    cout <<"value of integer:"<<i;
}