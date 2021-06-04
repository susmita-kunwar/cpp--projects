# include <iostream>
using namespace std;

void add(int s, int r) 
{
cout << "enter integer:" << s << r << endl;

}
void add(double a, int b, double c) 
{

cout << "enter integer:" << a << b << c << endl;
}
void add(double i, double j)
{
cout << "enter integer:" << i << j << endl;

}

int main()
{
  add(2,3);
  add(2.3,3,3.5);
  add(3.4,4.5);
  return 0;
}