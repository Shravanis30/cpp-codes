// write a program to devlope a table
#include <iostream>
using namespace std;

int main() {
    int num, i;

    cout << "ENTER THE NUMBER : ";
    cin >> num;

    for(i=1; i<=10; i++) 
    {
       cout << num*i ; 
       cout << "\n";
    }
    return 0;
}