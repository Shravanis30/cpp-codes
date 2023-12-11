// C++ program to print the rectangle using rows and coloumns 
#include <iostream>
using namespace std;
int main () {
    int i, j, rows, cols;

    cout << "enter the number of rows: ";
    cin >> rows;
    cout << "enter the numbers of cols: ";
    cin >> cols;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            cout << "*";
        }
            cout << endl; 
    }
        return 0;
}