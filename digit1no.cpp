// wap a program to find out 1st digit of whole number 
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter the 4 digit number : " << endl;
    cin >> num;
     
    cout << "therefore the 1st digit =" << num/1000 << endl;
    cout << "therefore the 2nd digit =" << num%1000/100<< endl;
    cout << "therefore the 3rd digit =" << num%100/10 << endl;
    cout << "therefore the 4th digit =" << num%10 << endl;
    return 0;
}