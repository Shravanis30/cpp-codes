//C++ program to print inverted half right side pyramind (invert right angle tringle)
/*
****
***
**
*
*/
#include <iostream>
using namespace std;
int main () {
    int i, j, n;

    cout << "enter the number of rows: ";
    cin >> n;

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }
            cout << endl;
    }
        return 0;
}