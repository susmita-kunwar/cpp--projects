#include <iostream>
#include <conio.h>
using namespace std;
 
 int main() {
    float num1,num2;
    char op;
    cout  << "enter operators '+' , '-' , '*' , '/' :"<< endl;
    cin >> op;
    cout  <<"enter the operands :";
    cin >> num1 >> num2 ;

    switch (op){
        case '+':
         cout << num1 << "+"<< num2 << "=" << num1 + num2 ;
           break;

        case '-':
          cout << num1 <<  "-" << num2 << "=" << num1 - num2 ;
           break;

        case '*':
          cout << num1 << "*" << num2 << "=" << num1 * num2 ;
           break;

        case '/':
          cout << num1 << "/" << num2 << "/" << num1 / num2 ;
           break;

        defalt:
         cout << "error or invalide" << endl;
          break;
    }
 return 0;
           }

