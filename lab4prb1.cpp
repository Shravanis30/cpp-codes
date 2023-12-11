//A school has following rule for grading system
//a. Below 25- fail
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "enter the marks: " << endl;
    cin >> marks;

    if(marks<25)
    {
        cout << "The student is fail";
    }
    else if (marks>=25 && marks<=45 )
    {
        cout << "Students's grade is E";
    }
    else if (marks>45 && marks<50)
    {
        cout << "Students's grade is D";
    }
    else if(marks>50 &&  marks<60)
    {
        cout << "Students's grade is C";
    }
    else if(marks>60 && marks<=80)
    {
        cout << "Students's grade is B";
    }
    else
    {
        cout << "Students's grade is A";
    }

return 0;
}
