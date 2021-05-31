#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num;
    cout << "enter integer:" <<endl;
    cin>> num;
    if (num !=0) {

        if ((num % 2)==0) {
        cout << "even number:" << num << endl;
    }
    else {
        cout << "odd number:" << num << endl;

    }
    }
    else {
        cout << "zero or neither even nor odd number:" << num << endl;
    }
        cout << "this statement is always executed";
   return 0;
}
