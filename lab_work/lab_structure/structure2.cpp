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
    student s;
    cout <<"enter details of student:" <<endl;
    cout << "name:";
    cin >> s.name;
    cout << "roll:";
    cin >> s.roll;
    cout << "address";
    cin >> s.address;
    
    cout << "details of student is:";
    cout << "name:" << s.name <<endl;
    cout << "roll:" << s.roll <<endl;
    cout << "address:" << s.address <<endl;
    return 0;
}
