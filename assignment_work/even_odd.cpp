#include <iostream>
#include <conio.h>
using namespace std;
 
 int main() {
    int num;
    cout  << "enter the number:"<< endl;
    cin >> num;
    if (num!=0){ 

          if ((num % 2)==0){
        cout << "even :"<< num << endl;
                           } 
    else  {
        cout <<"odd :"<< num << endl;
          } 
               }
     else {
         cout <<"zero neither even or odd :"<< num << endl;
         
          }
    
     cout << "enter number is valide";
     return 0;
           }
