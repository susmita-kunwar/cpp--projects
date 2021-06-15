# include <iostream>
using namespace std;

class student{
    public:
    int rollno ;
    char name[100];
    double per;
    void input()
    {
     cout <<" rollno:";
     cin >> rollno;
     cout <<" name:";
     cin >> name;
     cout <<" per:";
     cin >> per;
    }
     void display()
    {
        if(per>45 )
        {
            cout <<"congratulations you can here your marks:" <<endl;
            cout <<"rollno" <<rollno <<endl;
            cout <<"name" <<name <<endl;
            cout << "per" <<per <<endl;
        }
        else
        {
            cout <<"sorry your score is below 45:"<< endl;
        }
    }
};
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}
