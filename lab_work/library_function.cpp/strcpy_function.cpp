# include <iostream>
# include <string.h>
using namespace std;
int main()
{
    char name[200],copy[200];
    cout << "enter the string:"<< endl;
    gets(name);
    strcpy(copy, name);
    cout << "entered string:";
    cin >> name;
    cout << "copied string:" ;
    cin >> copy;
    return 0;

}