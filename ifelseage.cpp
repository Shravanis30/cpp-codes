// write a program to check weather adult or teenager or child and weather they can vote and drive or not
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "ENTER THE AGE : " ;
    cin >> age;

    if(age >= 18) 
    {
        cout << "ITS AN ADULT" << endl;
        cout << "CAN VOTE" << endl;
        cout << "CAN DRIVE" << endl;
    }
    else if(age > 13 && age < 18)
    {
        cout << "ITS A TEENAGER" << endl;
        cout << "CANT VOTE" << endl;
        cout << "CANT DRIVE" << endl;
    }
    else 
    {
        cout << "ITS A CHILD" << endl;
        cout << "CANT VOTE" << endl;
        cout << "CANT DRIVE" << endl;        
    }

    return 0;
}
