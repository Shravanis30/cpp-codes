#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int roll_no;
};

int main() {
    student myobj;

    myobj.name = "SHRAVANI";
    myobj.roll_no = 2221860;

    cout << "Name : " << myobj.name << endl;
    cout << "Roll no.: " << myobj.roll_no;

    return 0;
}
