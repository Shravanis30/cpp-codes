//C++ progaram to check if the enter number is leap year or not
#include<bits/stdc++.h>
using namespace std;
int main() {
    int year;

    cout << "enter the year : ";
    cin >> year;

    if(year%4==0 && year%100 != 0 || year%400 == 0)
    {
        cout << year << " :- " << "This is a leap year" << endl;
    }
    else
    {
        cout << year << " :- " << "This is not a leap year" << endl;
    }

    return 0;
}