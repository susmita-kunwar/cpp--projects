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
           cout <<"enter name of student :"<<endl;
           cin >> this->name;
           cout <<"enter rollno of student:"<<endl;
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

            cout <<" name of student:"<<this->name<<endl;
            cout <<" rollno of student:"<<this->rollno<<endl;
            cout <<" total marks scored in sport:"<<this->score<<endl;
            cout <<" total marks scored by student:"<<this->total<<endl;
        }

};


int main()
{   
    cout<<"sport:"<<"\n"<<endl;
    sport s1;
    s1.getdata();
    s1.getsport();
    
    cout<<"test:"<<"\n"<<endl;
    test t1;
    t1.getdata();
    t1.getmarks();

    cout<<"result:"<<"\n"<<endl;
    result r1;
    r1.getdata();
    r1.getsport();
    r1.getmarks();
    r1.gettotal();

   cout<<"displaying output \n:"<<endl;

   cout <<"sport:"<<"\n"<<endl;
   s1.displayb();

   cout <<"test:"<<"\n"<<endl;
   t1.displayc();

   cout <<"result:"<<"\n"<<endl;
   r1.displayd();

    return 0;

}