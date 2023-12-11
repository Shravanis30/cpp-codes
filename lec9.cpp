// C++ progarm to check if the year is leap year or not
#include <iostream>
using namespace std;
int main() {
    int year;

    cout  << "enter the year : ";
    cin >> year;

    if((year%4 == 0 && year%100 !=0) || year%400 == 0)
    {
        cout << year << " " <<"this year is leap year";
    }
    else
    {
        cout << year << " " << "this year is not leap year";
    }

    return 0;
}
