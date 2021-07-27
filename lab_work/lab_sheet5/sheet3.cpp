# include<iostream>
using namespace std;

void display_Area(int length)
{
    cout<<"Area of Square is :"<< length*length << endl;
}

void display_Area(float length1, float breadth1)
{
    cout<<"Area of Rectangle is :"<< length1*breadth1 << endl;
}

void display_Area(int length, int breadth)
{
    cout<<"Area of Triangle is :"<< (length*breadth)/2 << endl;
}


int main()
{
    int length = 2;
    int breadth = 3;
    float length1 = 2.5;
    float breadth1 = 3.5;

    display_Area(length);
    display_Area(length1, breadth1);
    display_Area(length, breadth);
}