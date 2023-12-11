//C++ program to find quotient and remainder 
#include <iostream>
using namespace std;
int main() {
    int num1, num2, quotient, remainder;

    cout << "enter the value of num1: ";
    cin >> num1;

    cout << "enter the value of num2: ";
    cin >> num2;

    quotient = num1 % num2;
    remainder= num1/num2;

    cout << "therefore the quotient = " << quotient << endl;
    cout << "therefore the remainder = " << remainder << endl;

    return 0;
    
}