# include <iostream>
using namespace std;

int main()
{
    int *pointInt;          // Declared an pointer to stored an integer value
    float *pointFloat;      // Declared an pointer to stored float value
     
    // Dynamically memory allocated
    pointInt = new int;         
    pointFloat = new float;    

    cout <<"Address is allocated to pointInt:"<<pointInt<<endl;
    cout <<"Address is allocated to pointFloat:"<<pointFloat<<endl;

    // Allocating value to the memory

    *pointInt = 20;
    *pointFloat = 25.5;

    cout <<"Address is allocated to pointInt:"<<*pointInt<<endl;
    cout <<"Address is allocated to pointFloat:"<<*pointFloat<<endl;  // Declaring the memory

    delete pointInt;
    delete pointFloat;
    return 0;


}