# include <iostream>
using namespace std;

class employee{
    public:
    char name[100];
    int id_no;
    float salary;
    void input()
    {
        for(int i=0; i<5; i++)
        {  
        cout <<"name:";
        cin >> name;
        cout <<"id_no:";
        cin >> id_no;
        cout <<"salary:";
        cin >> salary;
        }
    }
     void display()
     {
         cout << "name:" << name << "id_no:" << id_no << "salary" << salary << endl;

    }
};
int main()
{
    employee s[5];
    for(int i=0; i<5; i++)
    {
        cout <<"enter details of employee:"<< i+1<<endl;
        s[i].input();
    }
    for(int i=0; i<5; i++)
    {
        s[i].display();
        cout <<endl;

    }

    return 0;
}
