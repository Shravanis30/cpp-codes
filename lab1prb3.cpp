// C++ progarm to find size of int float, double, & char in your system
#include <iostream>
using namespace std;
int main() {
    int myint;
    float myfloat;
    double mydouble;
    char mychar;
    
    cout << (sizeof(myint)) <<endl;
    cout << (sizeof(myfloat)) <<endl;
    cout << (sizeof(mydouble)) <<endl;
    cout << (sizeof(mychar)) <<endl;

    return 0;
}