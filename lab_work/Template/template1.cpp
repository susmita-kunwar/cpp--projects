#include <iostream>
using namespace std;

template <class T>

T Large(T n1, T n2)
{
    return (n1 > n2) ? n1:n2;

}

int main()
{
    int i1 ,i2;
    float f1, f2;
    char c1, c2;

    cout <<"enter two integer is :";
    cin >>i1>>i2;
    cout <<Large(i1, i2) <<"is large:"<<endl;

    cout <<"enter two float is :";
    cin >>f1>>f2;
    cout <<Large(f1, f2) <<"is large:"<<endl;

    cout <<"enter two character is :";
    cin >>c1>>c2;
    cout <<Large(c1, c2) <<"has large ASCII value."<<endl;  // This call is equivalent to Large<char, char>(c1, c2)
                                                            // mixing the data types
    return 0;                                               // cout<<"can we mix the datatypes?"<<Large(i1, f1);
    }

    // If two characters are passed to function template, character with larger ASCII value is displayed.
