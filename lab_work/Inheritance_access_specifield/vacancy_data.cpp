# include<iostream>
using namespace std;

class person
{
    protected:
        string name;     //base class
        int code;
    
    public:
        void getperson()
        {
            cout <<"enter the name:"<<endl;
            cin >>this->name;
            cout <<"enter the code:"<<endl;
            cin >>this->code;
        }

};



class Admin : public virtual person                                       // derived class
{
    protected:
    int experience;

    public:
        void getadmin()
        {
            cout <<"enter experience required:"<<endl;
            cin >>this->experience;
        }

};

class Account : public virtual person                                       //derived class
{
    protected:
    int pay;
    public:
        void getaccount()
        {
            cout <<"enter payment :"<<endl;
            cin >>this->pay;
        }

       void displayc()
        {
            cout <<"Name:"<<this->name<<endl;
            cout <<"Code:"<<this->code<<endl;
            cout <<"payment:"<<this->pay<<endl;
        } 

};

class Master : public Admin, public Account
{
    string name;
    int code,experience;
    float pay;
    public:
         void details()
        {
            cout << " name :"<<this->name<<endl;
            cout << "code:"<<this->code<<endl;
            cout <<"total experience required:"<<this->experience<<endl;
            cout <<"total payment :"<<this->pay<<endl;
        }

};


int main()
{
    Master m;
    char choice;
    do
    {
        m.getperson();
        m.getadmin();
        m.getaccount();

        cout<<"If you want to update the register your data please say Y/N ?"<<endl;
        cin >>choice;
        cin.ignore();
    } while (choice=='Y' || choice =='Y');

    system("cls");

    cout <<"displaying the data registered:"<<endl;
    m.details();
}
    

    