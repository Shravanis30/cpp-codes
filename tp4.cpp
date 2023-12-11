//C++ program to print following pattern 
/*
12345
12345
12345
12345
12345
*/
#include <iostream>
using namespace std;
int main () {
    int i, j, n;

    cout << "enter the value of rows: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << j;
        }
            cout << endl;
    }
             return 0;
}