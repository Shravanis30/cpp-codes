//C++ program to find if the number is even or odd number 
#include <iostream>
using namespace std;
int main () {
    int num;
    cout << "enter the num :";
    cin >> num;
    if(num%2==0)
    {
        cout << "even number";
    }
    if(num%2!=0)
    {
        cout << "odd number";
    }
    return 0;
}