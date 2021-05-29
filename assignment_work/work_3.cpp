#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num;
    cout << "enter integer:" <<endl;
    cin>> num;
    if (num >0) {
        cout << "positive number:" << num << endl;
    }
    else if (num <0) {
        cout << "negative number:" << num << endl;

    }
    else {
        cout << "zero number:" << num << endl;
    }
        cout << "this statement is always executed";
   return 0;
}
