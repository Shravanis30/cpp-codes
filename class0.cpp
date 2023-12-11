
#include<iostream>
using namespace std;

    class student{
        public:
        string name;
        int age;
        bool gender;
    };
int main(){

    student a;
    a.name = "shravani";
    a.age = 17;
    a.gender = 1;

    student b;
    b.name = "Tejas";
    b.age = 17;
    a.gender = 0;

    student c;
    c.name = "Deep";
    c.age = 10;
    c.gender = 0;

    student d;
    d.name = "Sharwari";
    d.age = 17;
    d.gender = 1;

    cout << a.name << " " << b.name << endl;

    return 0;

}