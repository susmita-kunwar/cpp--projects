#include <iostream>
#include <conio.h>
using namespace std; 
struct student
 {
char name [10];
int roll;
char address [20];
 };

int main()
{
student s[3];
cout <<"enter details of 3 student:" <<endl;
 for (int i=0; i<3; i++)
{
cout <<"name:";
cin >> s[i].name;
cout <<"roll:";
cin >> s[i].roll;
cout <<"address:";
cin >> s[i].address;
 }
cout <<endl;
 cout << "the details of 3 student are:"<<endl;
for (int i=0; i<3; i++)
{
cout << "name:" << s[i].name <<endl;
cout << "roll:" << s[i].roll <<endl;
cout << "address:" << s[i].address <<endl;
}
    
return 0;
}
