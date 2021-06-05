# include <iostream>
# include <string.h>
using namespace std;
int main()
{
    char a[200],b[200];
    int len1,len2;
    cout << "enter the string a :";
    cin >> a;
    cout << "enter the string b :";
    cin >> b;
    len1 = strlen(a);
    len2 = strlen(b);
    if (len1==len2)
    {
        if (strcmp(a, b)==0)
        {
        cout <<"print equal length:";
        }
        else
        {
            cout << "print unequal length:";
        }

    }
    else{
        cout << "print unequal length:";
    }
     return 0;

}


