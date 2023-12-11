/*write a code in c++ to identify if year is leap year or not 
condition is it must be divisible by 4 but not by 100 or 400*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "ENTER THE YEAR :";
    cin >> year;

    if(year%4 == 0 && year%100 !=0|| year%400 == 0)
    {
        cout << year << " " <<  ": ITS A LEAP YEAR";
    }
    else 
    {
        cout << year << " " <<  ": ITS NOT A LEAP YEAR";
    }
    return 0;
}









