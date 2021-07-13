# include<iostream>
using namespace std;

class person
{
    protected:
        string name;     //base class
        int code;
    
    public:
        void getdata()
        {
            cout <<"enter name of vacant:"<<endl;
            cin >>this->name;
            cout <<"enter code of vacant:"<<endl;
            cin >>this->code;
        }

        void displaya()
        {
            cout << "vacant name:"<<this->name<<endl;
            cout << "vacant code:"<<this->code<<endl;
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

        void displayb()
        {
            cout << "vacant name:"<<this->name<<endl;
            cout << "vacant code:"<<this->code<<endl;
            cout <<"experience required for vacant:"<<this->experience<<endl;
        } 

};

class Account : public virtual person                                       //derived class
{
    protected:
    int pay;
    public:
        void getaccount()
        {
            cout <<"enter payment for first month:"<<endl;
            cin >>this->pay;
        }

       void displayc()
        {
            cout << "vacant name:"<<this->name<<endl;
            cout << "vacant code:"<<this->code<<endl;
            cout <<"payment for first month:"<<this->pay<<endl;
        } 

};

class Master : public Admin, public Account
{
    string name;
    int code,experience;
    float pay;
    public:
        void getmaster()
        {
            cout <<"enter name of master:"<<endl;
            cin >>this->name;
            cout <<"enter code of master:"<<endl;
            cin >>this->code;
            cout <<"enter experience required:"<<endl;
            cin >>this->experience;
            cout <<"enter payment for first month:"<<endl;
            cin >>this->pay;
            
        }

         void update()
        {

            cout << " name of student:"<<this->name<<endl;
            cout << "rollno of student:"<<this->code<<endl;
            cout <<"total marks scored in sport:"<<this->experience<<endl;
            cout <<"total marks scored by student:"<<this->pay<<endl;
        }

};


int main()
{
    Master m;

    m.getdata();
    //r1.displaya();

    m.getadmin();
   // r1.displayb();

    m.getaccount();
    //r1.displayc();

    m.getmaster();
   // r1.displayd();
   
   cout<<endl;

   cout<<"displaying output:"<<endl;
   m.displaya();
   m.displayb();
   m.displayc();
   m.update();

    return 0;

}