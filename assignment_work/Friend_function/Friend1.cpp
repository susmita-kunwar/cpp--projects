//WAP to create class Sample with 2 float data members and member functions void getData()
// to input the values and one friend function float mean(Sample) to claculate and return mean value.  

# include <iostream>
using namespace std;

class sample
{
    friend float mean(sample);
    public:
    float a,b;
    void getdata()
    {
        cout <<"Input data:" <<endl;
        cin >> a >> b;
    }
    
};
float mean(sample obj)
{
    float x;
    x = (obj.a +obj.b)/2;
    return x;
}

int main()
{
   sample obj;
   obj.getdata();
   cout<< "Mean: "<< mean(obj) <<endl;
   return 0;
}