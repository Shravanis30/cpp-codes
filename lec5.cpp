//C++ the program to identify even or odd
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter the value :";
    cin >> num;

    cout << num << " "<<(num%2==0? "even number": "odd number");

    return 0;
}