# include <iostream>
# include <string.h>
using namespace std;
int main()
{
    char a[20],b[20];
    int length;
    cout << "enter the string:"<< endl;
    cout <<"enter string a:";
    cin >> a;
    cout << "enter string b:";
    cin >> b;
    strcat(a, b);
    cout <<"string after concatenates:" << a << endl;
    return 0;

}


