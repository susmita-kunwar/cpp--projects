#include <iostream>
#include <conio.h>
using namespace std; 
struct student {
    char name [10];
    int roll;
    char address [20];
};
int main(){
    student s;
    cout <<"enter details of student:";
    cout <<"name:";
    cin >> s.name;
    cout <<"roll no:";
    cin >> s.roll;
    cout<<"address:";
    cin >> s.address;
    cout << "the details of the student is:";
    cout << "name:"<<s.name<<endl<<"roll no:"<<s.roll<<endl<<"address:"<<s.address<<endl;
    return 0;
}
