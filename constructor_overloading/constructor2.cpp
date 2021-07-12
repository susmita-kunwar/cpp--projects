# include <iostream>
using namespace std;

class Cars{
    private:
    string company_name;

    string company_model;

    string fuel_type;

    float mileage;

    double price;

    public:
    
    Cars()  //deafult constructor
    {
        company_name = "tyota";
        //cout <<"default constructor:" <<endl;
    }

    Cars(string cname, string mname, string desel, float m ,double p)   // parameter constructor.
    {
         company_name = cname;
         company_model = mname;
         fuel_type = desel;
         mileage =  m;
         price = p;

    }

    Cars(Cars &obj)
    {
        company_name = obj.company_name;
        company_model = obj.company_model;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;

    }

    void setdata(string cname, string mname, string desel, float m ,double p)
    {
         company_name = cname;
         company_model = mname;
         fuel_type = desel;
         mileage =  m;
         price = p;

    }

    void display()
{
    cout <<"properties of Cars:" <<endl;
    cout<<"company_name:" << company_name <<endl;
    cout<<"company_model:" << company_model <<endl;
    cout<<"fuel_type:" << fuel_type <<endl;
    cout<<"mileage:" << mileage <<endl;
    cout<<"price:" << price <<endl<<endl;

}

};

int main()
{
    Cars c1,c2("toyota","altis", "diesel",  15.5 , 350000);

    c1.setdata("toyota","altis", "diesel",  30 , 150000);

    c1.display();

    c2.display();

    Cars c3 = c1;   //copy constructor

    c3.display();

    return 0;
}

