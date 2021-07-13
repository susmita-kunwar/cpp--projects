# include<iostream>
using namespace std;

class student
{
    protected:
        string name;     //base class
        int rollno;
    
    public:
        void getdata()
        {
            cout <<"enter student name:"<<endl;
            cin >>this->name;
            cout <<"enter student rollno:"<<endl;
            cin >>this->rollno;
        }

        void displaya()
        {
            cout << "student name:"<<this->name<<endl;
            cout << "student rollno:"<<this->rollno<<endl;
        } 

};

class sport : public virtual student                                       // derived class
{
    protected:
    int score;

    public:
        void getsport()
        {
            cout <<"enter score of players:"<<endl;
            cin >>this->score;
        }

        void displayb()
        {
            cout <<"score obtained by players:"<<this->score<<endl;
        } 

};

class test :public  virtual student                                       //derived class
{
    protected:
    int math, eng;
    public:
        void getmarks()
        {
            cout <<"enter mark in math:"<<endl;
            cin >>this->math;
            cout <<"enter mark in english:"<<endl;
            cin >>this->eng;
        }

       void displayc()
        {
            cout <<"marks in math:"<<this->math<<endl;
            cout <<"marks in english:"<<this->eng<<endl;
        } 

};

class result : public sport, public test
{
    int total;
    public:
        void gettotal()
        {
            this->total = this->math + this->eng;
        }

         void displayd()
        {

            cout << " name of student:"<<this->name<<endl;
            cout << "rollno of student:"<<this->rollno<<endl;
            cout <<"total marks scored in sport:"<<this->score<<endl;
            cout <<"total marks scored by student:"<<this->total<<endl;
        }

};


int main()
{
    result r1;

    r1.getdata();
    //r1.displaya();

    r1.getsport();
   // r1.displayb();

    r1.getmarks();
    //r1.displayc();

    r1.gettotal();
   // r1.displayd();
   
   cout<<endl;

   cout<<"displaying output:"<<endl;
   r1.displaya();
   r1.displayb();
   r1.displayc();
   r1.displayd();

    return 0;

}