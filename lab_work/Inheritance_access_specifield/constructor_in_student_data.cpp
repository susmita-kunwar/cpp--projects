# include<iostream>
using namespace std;

class student
{
    protected:
        string name;     //base class
        int rollno;
    
    public:
        student()
        {
            name = "The Rock";
            rollno = 00012;
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
        sport()
        {
            score = 40;
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
        test()
        {
            math = 90;
            eng = 90;
            
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
        result()
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
    student s1;

    sport s2;

    test t1;

    result r1;

    cout<<"displaying output:"<<endl;

    r1.displaya();

    r1.displayb();

    r1.displayc();

    r1.displayd();

   return 0;

}