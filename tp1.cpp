// C++ program to print rectangle pattern
/* 
*****
*****
*****
*****
*****
*/
#include <iostream>
using namespace std;
int main () {
    int i, j, n;
    cout << "enter the number of rows: ";
    cin >> n;
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n;j++)
        {
            cout << "*";
        }
            cout << endl;
    }
    return 0;
}