#include <iostream>
using namespace std;
class Employee
{
    private :
    int id ;
    static int count; //declare
    //int count;
    
    public :
    void getdata()
    {
    cout << "enter employee id : ";
    cin >> id;
    count++;
    }
    void setdata()
    {
        cout<<"employee id is "<< id <<" and this is employee number "<< count <<endl;
    }
};
int Employee :: count; //by default starts with 0
int main()
{
    Employee a,b,c, d , e;
    a.getdata();
    a.setdata();
    b.getdata();
    b.setdata();
    c.getdata();
    c.setdata();
    d.getdata();
    d.setdata();
    e.getdata();
    e.setdata();
    return 0;
}