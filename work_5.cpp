# include <iostream>
#include <conio.h>
using namespace std;
 
 int main() {
     char op;
     float num1,num2;
     cout << "enter operator:+ , - , * , /:";
     cin >> op ;
     cout << "enter two operands:" ;
     cin >> num1 >> num2 ;
     switch (op) {
         case '+':
         cout << num1 << '+' << num2 << '=' << num1 + num2 ;
         break;

         case '-':
         cout << num1 << '-' << num2 << '=' << num1 - num2 ;
         break;

         case '*':
         cout << num1 << '*' << num2 << '=' << num1 * num2 ;
         break;

         case '/':
         cout << num1 << '/' << num2 << '=' << num1 / num2 ;
         break; 

         default:
         cout <<"error:" << endl;
     }
        return 0;
 }