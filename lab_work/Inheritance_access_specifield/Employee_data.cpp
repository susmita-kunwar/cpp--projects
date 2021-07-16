/*  An  educational  institution  wishes  to  maintain  a  database  of  its  employees. The  database 
    is divided  into  a  number  of  classes  whose  hierarchical  relationship  are  shown  below.
    The  figure also  shows  minimum  information  requires  for  each  class. Specify  all  the  classes
     and  define functions to create database and retrieve individual information when required.*/

     # include<iostream>
     using namespace std;

     class Staff
     {
         protected:
            string name;
            int code;

         public:
            void getdata(string cname, int b)
            {
                name = cname;
                code = b;

             }
     };

     class Officer : public Staff
     {
         private:
            string grade;

         public:
            void get_information(string a)
            {
                grade = a;
            }
             
            void display()
            {
                cout<<" Name of officer: : "<<this->name<<endl;
                cout<<" code of teacher: "<< this->code<<endl;
                cout<<" grade of officer: "<<this->grade<<endl;
            
            }      
     }; 

     class  Teacher : public Staff
     {
         protected:
         string subject;
         string publication;

         public:
         void get_information(string d, string e)
         {
             subject = d;
             publication = e;
            
         }
         void display()
        {
            cout<<" Name of teacher : "<< name<<endl;
            cout<<" code of teacher: "<< code<<endl;
            cout<<" subject of techerr: "<< subject <<endl;
            cout<<" publication of techerr: "<< publication <<endl;
            
        }     


     }; 

     class Typist : public Staff 
     {
         protected:
         float speed;

         public:
         void get_speed(int f)
         {
             speed = f;
         }

          void display()
         {
             cout <<"name of typist:" << name <<endl;
             cout<<"code of typist:" << code <<endl;
             cout <<"speed of typist:"<< speed<<endl; 

         }

     }; 

     class Causal : public Typist
     {
         protected:
         float daily_wages;

         public:
         void get_wages(float g)
         {
             daily_wages = g;
         }
          void display()
         {
             cout <<"name:" << name <<endl;
             cout<<"code :" << code <<endl;
             cout <<"speed:"<< speed<<endl;
             cout<<"daily wages:"<< daily_wages<<endl; 

         }

     }; 

     class Regular : public Typist
     {
         float daily_wages;

         public:
         void get_wages(float g)
            {
                daily_wages = g;
            }
         void display()
         {
             cout <<"name:" << name <<endl;
             cout<<"code :" << code <<endl;
             cout <<"speed:"<< speed<<endl;
             cout<<"daily wages:"<< daily_wages<<endl; 
         }
     }; 


int main()
{
    Teacher t1;
    t1.getdata("susmita",444);
    t1.get_information("maths", "physics");
    cout <<endl;

    Officer o1;
    o1.getdata("The Rock",420);
    o1.get_information("A");
    cout<<endl;

    Regular r1;
    r1.getdata("Captain America", 400);
    r1.get_speed(86.65);
    r1.get_wages(20000);
    cout<<endl;

    Causal c1;
    c1.getdata("Kevin", 440);
    c1.get_speed(85.65);
    c1.get_wages(10000);
    cout <<endl;

    cout <<"displaying the data"<<endl;
    
    cout <<"Teacher:"<<endl;
    t1.display();

    cout <<"Officer:"<<endl;
    o1.display();

    cout <<"Regular typist:"<<endl;
    r1.display();

    cout <<"Causal typist:"<<endl;
    c1.display();
    
    return 0;
}