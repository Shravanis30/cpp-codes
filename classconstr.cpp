#include <iostream>
using namespace std;

class student {
    public:
    string name;
    string surname;
    int rollno;
    student(string a, string b, int c);
};

student::student(string a, string b, int c) {
    name = a;
    surname = b;
    rollno = c;
}

int main() {
    student obj1("SHRAVANI", "SALUNKE", 2221860);
    student obj2("SHARWARI", "SHINDE", 2221864);
    student obj3("DEEP", "SALUNKE", 64);
    student obj4("TEJAS", "PATIL", 2221853);

    cout << obj1.name <<" "<< obj1.surname <<" "<< obj1.rollno << endl;
    cout << obj2.name <<" "<< obj2.surname <<" "<< obj2.rollno << endl;
    cout << obj3.name <<" "<< obj3.surname <<" "<< obj3.rollno << endl;
    cout << obj4.name <<" "<< obj4.surname <<" "<< obj4.rollno;

    return 0;
}
