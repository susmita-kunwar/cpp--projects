# include <iostream>
# include <string.h>
using namespace std;
int main()
{
    char a[200],b[200];
    cout << "enter the string a :";
    cin >> a;
    cout << "enter the string b :";
    cin >> b;
    strcat(a, b);
    cout <<"string after concatination:" << a << endl;
    return 0;

}


