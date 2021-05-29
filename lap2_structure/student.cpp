#include <iostream>
#include <conio.h>
using namespace std;

    struct student
    {
        char name [15];
        int roll;
        char address[10];
        float phone;
        char email [22];
        char school [20];
    };

    int main(){
                  student s;
                  cout <<"enter the details of student:";
                  cout <<"name:";
                  cin >> s.name;
                  cout <<"roll:";
                  cin >> s.roll;
                  cout <<"address:";
                  cin >> s.address;
                  cout <<"phone:";
                  cin >> s.phone;
                  cout <<"email:";
                  cin >> s.email;
                  cout <<"school:";
                  cin >> s.school;
                  cout << endl;

                  cout << " enter the details of student is:" << endl;
                  cout << "name:" << s.name << endl;
                  cout << "roll:" << s.roll << endl;
                  cout << "address:" << s.address << endl;
                  cout << "phone:" << s.phone << endl;
                  cout << "email:" << s.email << endl;
                  cout << "school:" << s.school << endl;
                  return 0;
              }