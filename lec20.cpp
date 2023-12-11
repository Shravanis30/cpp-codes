#include <iostream>
using namespace std;

int main()
{
    int marks[] = {10, 20, 30, 40};
    int mathmarks[4];
    mathmarks[0] = 23;
    mathmarks[1] = 58;
    mathmarks[2] = 74;
    mathmarks[3] = 59;

    cout << "these are math marks " << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    cout << "these are marks" << endl;
    marks[1] = 90;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    //marks[1] = 90;
    //cout << marks[1] << endl;
    return 0;
}
/*
for(int i=0; i<4; i++)
{
    cout << "the value of marks" << i << "is"<< marks[i] << endl;
}*/